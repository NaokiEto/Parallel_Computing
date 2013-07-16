#!/usr/bin/perl

use Tie::File;
if(-e "AMDAPPlog.txt") {
        unlink("AMDAPPlog.txt");
}
$pkg_name="AMD-APP-SDK-v2.8.1.0-RC";
$version_appsdk="v2.8.1.0";
open(OUTPUT_LOG,'>', "AMD_APPSDK_v2.8.1.0.log");
my $steps =1;
$icd_tarfile="icd-registration.tgz";
$lib32="/lib/x86";
$lib64="/lib/x86_64";
$OS_TYPE = `uname -a`;
print OUTPUT_LOG  "$steps )Starting Installation of AMD APPSDK $version_appsdk .... \n";
$steps=$steps+1;
$result = system ($Distros);
if($OS_TYPE =~ /x86_64/) {
   	print OUTPUT_LOG  "$steps )64-bit Operating System Found.. \n"; $steps=$steps+1;
	print "===========================================================\n";
   	print "64-bit Operating System Found.. \n ";
   	$SDK_NAME="$pkg_name-lnx64.tgz";
   	$OS = "x64"; 
} 	
else {
   	print OUTPUT_LOG "$steps )32-bit Operating System Found...\n"; 	$steps=$steps+1; 
	print "===========================================================\n";
  	$SDK_NAME="$pkg_name-lnx32.tgz";
   	$OS = "x86"; 
}
unless (-e $SDK_NAME) {
	print "Please download and Install the $OS package.Exiting..\n";
	print "===========================================================\n";
	print OUTPUT_LOG  "$steps )Please download and Install the $OS package(AMD-APP-SDK-v2.8.1.0-lnx64.tgz).. \n"; $steps=$steps+1;
	exit;
}

$dirname =  substr($SDK_NAME,0,length($SDK_NAME)-4);
print "\n";
print "Starting Installation of AMD APPSDK $version_appsdk .... \n ";
print "SDK package name is :$dirname.tgz\n";

#Check for latest Version
$VersionCmd = "wget -b -t 1 -q http://developer.amd.com/assets/version_linux.txt -P /tmp/AMD_tmpver";
$CurrVersion = "2.8.1214.3";
$VersionFilePath = "/tmp/AMD_tmpver/version_linux.txt";

if (-e $VersionFilePath) {
unlink $VersionFilePath;
}
print "Checking Latest Version Info.....\n";
system($VersionCmd);
sleep 3;print "...";sleep 2;print "...\n";
sleep 1;
open(VERSION_LOG,'>', "VersionInfo.txt");
print VERSION_LOG "===================AMD APPSDK Version Info===================\n\n";

if (-e $VersionFilePath) {
	#process file
	open(FILEV, $VersionFilePath || die("Warning.!"));
	$FileInfo=<FILEV>;
	
	#chomp $FileInfo;
	@VersionVar = split('=',$FileInfo);
	$LatestVersion=@VersionVar[1];$LatestVersion =~ s/\r?\n$//;
	$Message=<FILEV>;
	chomp $Message;
	@msgInfo = split('=',$Message);
	$MessageStr = @msgInfo[1];$ReadMessage=$MessageStr;
	close FILEV;
	if (-e $VersionFilePath) {
	system('rm','-r','/tmp/AMD_tmpver');
	}
	print "\n";
 
	if ($LatestVersion ne $CurrVersion){
	print VERSION_LOG " AMD APPSDK Latest Version : $LatestVersion \n";
	print VERSION_LOG " $MessageStr \n";
	print " **You are installing AMD APPSDK Version $CurrVersion ...\n";
	print " **Latest Version Available : $LatestVersion \n";
	print " Do you wish to continue installation of this version of SDK?\n";
	$flag=1;
	    eval {
			local $SIG{ALRM} = sub { die "ALARM" };
			while($flag) {
			alarm(60);
			print " Type 'Yes' to Continue installation of this version of APPSDK, Type 'No' to exit\n";
			print " Enter :";
			chomp($var=<>);
				if (uc($var) eq 'YES') {
				print VERSION_LOG " AMD APPSDK Current Version: $CurrVersion\n";
				$flag=0;
				}
				if (uc($var) eq 'NO') {
				print " **Please download latest  version of AMD APPSDK\n";
				print " Exiting Installation\n";
				$flag=0;
				print OUTPUT_LOG  "$steps )Version Information Available in VersionInfo.txt \n"; $steps=$steps+1;
				print VERSION_LOG "============================================================\n";
				close VERSION_LOG;
				exit;
				}
			alarm(0);
			}              
		};
		if ($@ =~ /ALARM/) {
			print "\n\n Waited too long for input...taking default value 'YES'\n";
			print VERSION_LOG " AMD APPSDK Current Version: $CurrVersion\n";
		} 
	}
	else {
	print VERSION_LOG "Installed latest version of AMD APPSDK $CurrVersion\n";
	print " **You are installing latest version of APPSDK $CurrVersion\n";
	}
}
else {
print VERSION_LOG " AMD APPSDK Current Version: $CurrVersion\n";
}
print VERSION_LOG "============================================================\n";
close VERSION_LOG;
print OUTPUT_LOG  "$steps )Version Information Available in VersionInfo.txt \n"; $steps=$steps+1;
print " Continuing Installation...\n";
print "===============================================================\n";


#Remove the tgz and creat a new tgz#
if(-e $dirname) {
	print "\nDirectory already exists deleting\n ";
	$result = system("rm -rf $dirname"); 
}
$cur_dir = `pwd`;
print "Current directory path is  : $cur_dir";
$cmd = "tar -xzf $SDK_NAME";
$cmd_icd = "tar -xzf $icd_tarfile";
$result = system ($cmd);
$result_icd =system ($cmd_icd);
if($result) {
	print OUTPUT_LOG "\n $steps )Failed to untar the sdk package\n";  $steps=$steps+1; 
        print "\nFailed to untar the sdk package\n"; } else {
	print OUTPUT_LOG "$steps )Untar command executed succesfully, The SDK package available\n"; $steps=$steps+1;
        print "Untar command executed succesfully, The SDK package available\n"; 
}
if($result_icd) {
	print OUTPUT_LOG "\n $steps )Failed to untar the icd setting tar file\n"; $steps=$steps+1;
        print "Failed to untar the icd setting tar file\n"; } else {
	print OUTPUT_LOG "$steps )Untar command executed succesfully, The ICD package available \n"; $steps=$steps+1;
	print "Untar command executed succesfully, The ICD package available \n"; 
}
chomp($dirname);
chomp($cur_dir);
#Copy files to destination folder#
$AMDAPPSDKROOT= "/opt/AMDAPP";
print OUTPUT_LOG "$steps )SDK Binaries/Source/Samples/Other files copying to  = $AMDAPPSDKROOT \n"; $steps=$steps+1;
print "Copying files to $AMDAPPSDKROOT/ ... \n";
$dt = "rm -rf /opt/AMDAPP/";
$result = system ($dt);
$cp = "mv -f $dirname /opt/AMDAPP/";
$result = system ($cp);
if(!$result) {
	print OUTPUT_LOG "$steps )SDK files copied successfully at /opt/AMDAPP/\n"; $steps=$steps+1;
	print "SDK files copied successfully at /opt/AMDAPP/\n";     } else {
	print OUTPUT_LOG "$steps )Failed to copy SDK files to /opt/AMDAPP/, please check the root permission and try 
                          again   \n"; 	$steps=$steps+1;
        print "Failed to copy SDK files to /opt/AMDAPP/, please check the root permission and try again..Exiting.. \n";
	print "To Install, Type => 'sudo ./Install-AMD-APP.sh' \n";exit; 
}
#Copy the Runtime files to System#
print OUTPUT_LOG "$steps )Copying the OpenCL runtime files to System...  \n";  $steps=$steps+1;
	$bin = "/opt/AMDAPP/bin" ;
	$cpclinfo = "mv -f $bin/x86_64/clinfo /usr/bin/";
	$result = system ($cpclinfo);
	$rmbin = "rm -rf $bin";
	$result = system ($rmbin);
	$lib = "/opt/AMDAPP/lib";
	#Finiding the OS level#
	my $distros = qx(lsb_release -i);
	if ($distros =~ m/Ubuntu/) {
		#Checking for Catalyst OpenCL runtime files in /usr/lib , Ubuntu distros

 		$Cat_OCL_RT_files = '/usr/lib/libamdocl64.so';
		$lib = "/opt/AMDAPP/lib";
 		if (-e $Cat_OCL_RT_files) {
 		print "AMD Catalyst OpenCL Runtime is available hence skipping OpenCL CPU Runtime Installation \n";
		$cplibCL32 = "rm -f $lib/x86/libOpenCL*";
		$result = system ($cplibCL32);
		$cplibamd32 = "rm -f $lib/x86/libamdocl32.so";
		$result = system ($cplibamd32);
		$cplibCL64 = "rm -f $lib/x86_64/libOpenCL*";
		$result = system ($cplibCL64);
		$cplibamd64 = "rm -f $lib/x86_64/libamdocl64.so";
		$result = system ($cplibamd64); 
		$symlink64 = "ln -s /usr/lib/libOpenCL.so.1 /usr/lib/libOpenCL.so";
		$result = system ($symlink64); 
		$symlink32 = "ln -s /usr/lib32/libOpenCL.so.1 /usr/lib32/libOpenCL.so";
		$result = system ($symlink32);
		}
		else {
 		print "Installing AMD APP CPU runtime under /opt/AMDAPP/lib \n";
  		}
 	}
	 else {
		#Checking for Catalyst OpenCL runtime files in /usr/lib64 , RHEL/Suse distros
 		$Cat_OCL_RT_files = '/usr/lib64/libamdocl64.so';
 		if (-e $Cat_OCL_RT_files) {
 		print "AMD Catalyst OpenCL Runtime is available hence skipping OpenCL CPU Runtime Installation \n";
		$cplibCL32 = "rm -f $lib/x86/libOpenCL*";
		$result = system ($cplibCL32);
		$cplibamd32 = "rm -f $lib/x86/libamdocl32.so";
		$result = system ($cplibamd32);
		$cplibCL64 = "rm -f $lib/x86_64/libOpenCL*";
		$result = system ($cplibCL64);
		$cplibamd64 = "rm -f $lib/x86_64/libamdocl64.so";
		$result = system ($cplibamd64); 
		$symlink64 = "ln -s /usr/lib64/libOpenCL.so.1 /usr/lib64/libOpenCL.so";
		$result = system ($symlink64); 
		$symlink32 = "ln -s /usr/lib/libOpenCL.so.1 /usr/lib/libOpenCL.so";
		$result = system ($symlink32);
		}
		else { 		print "Installing AMD APP CPU runtime under /opt/AMDAPP/lib";  		   
				$bin = "/opt/AMDAPP/bin/x86_64";   
				#$clinfo = "cp -f $bin/clinfo /usr/bin/";
				#$result = system ($clinfo); 
				$rmbin = "rm -rf $bin/";
				$result = system ($rmbin);
 		}
 	}

	#$rmicd = "rm -rf /etc/OpenCL/";
	#$result = system ($rmicd);
	$cpicd = "cp -rf $cur_dir/etc/OpenCL/ /etc/";
	$result = system ($cpicd);
	$deletc = "rm -rf $cur_dir/etc/";
	$result = system ($deletc);
#Setting the Env variables#
print OUTPUT_LOG "$steps )Updating Environment variables... \n"; $steps=$steps+1;
print "Updating Environment variables... \n";
my $file_name = "/etc/profile" ;
$delSDK = "perl -i -nle 'print if !/AMDAPPSDKROOT/' $file_name";
$result = system ($delSDK);
$del = "perl -i -nle 'print if !/AMDAPP/' $file_name";
$result = system ($del);
$delLDPATH = "perl -i -nle 'print if !/export LD_LIBRARY_PATH/' $file_name";
$result = system ($delLDPATH);
$lib32="/lib/x86";
$lib64="/lib/x86_64";
print OUTPUT_LOG "$steps )Updating LD_LIBRARY_PATH in /etc/profile";
$steps=$steps+1;
$libpath32 = "\$"."LD_LIBRARY_PATH:"."\"".$AMDAPPSDKROOT.$lib32."\"";
$libpath64 = "\$"."LD_LIBRARY_PATH:"."\"".$AMDAPPSDKROOT.$lib64."\"".":"."\"".$AMDAPPSDKROOT.$lib32."\"";
if($OS eq "x64"){
	$libpath =$libpath64;
	$dt = "rm -f /etc/ld.so.conf.d/amdapp*";
	$result = system ($dt);
	print "32-bit path is :";
	$cr = "echo /opt/AMDAPP/lib/x86 | sudo tee /etc/ld.so.conf.d/amdapp_x86.conf";
	$result = system ($cr);
	print "64-bit path is :";
	$cr = "echo /opt/AMDAPP/lib/x86_64 | sudo tee /etc/ld.so.conf.d/amdapp_x86_64.conf";
	$result = system ($cr); } else {
	$dt = "rm -f /etc/ld.so.conf.d/amdapp*";
	$result = system ($dt);
	print "32-bit path is :";
	$cr = "echo /opt/AMDAPP/lib/x86 | sudo tee /etc/ld.so.conf.d/amdapp_x86.conf";
	$result = system ($cr);
	$libpath =$libpath32; }
	$result = `echo AMDAPPSDKROOT='\"$AMDAPPSDKROOT\"' >> $file_name`;
	$result = `echo LD_LIBRARY_PATH='$libpath' >> $file_name`;
	$result = `echo export AMDAPPSDKROOT >> $file_name` ;
	$result = `echo export LD_LIBRARY_PATH >> $file_name` ;
if(!$result) {
	print OUTPUT_LOG "\n$steps )Environment variables updated successfully\n"; $steps=$steps+1;
        print "Environment variables updated successfully\n"; } else {
	print OUTPUT_LOG "$steps )Failed to update the Environment variables, please check the root permissions \n"; 
        $steps=$steps+1;
	print "Failed to update the Environment variables, please check the root permissions \n";
}
print OUTPUT_LOG "$steps )Initialize global environment variables... \n"; $steps=$steps+1;
$in = "sudo ldconfig -v > ldconfig.log 2>&1";
$result = system ($in);
print OUTPUT_LOG "$steps )Global environment variables Initialized\n"; $steps=$steps+1;
print OUTPUT_LOG "$steps )AMD APP installation Completed\n"; $steps=$steps+1;
print "AMD APPSDK $version_appsdk installation  Completed\n";
print OUTPUT_LOG "$steps )Reboot required to reflect the changes"; $steps=$steps+1;
print ">> Reboot required to reflect the changes\n";
print "===============================================================\n";
close OUTPUT_LOG;
