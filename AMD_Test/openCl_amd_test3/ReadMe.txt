The below FAQs gives a clear idea on the Linux APP SDK Installer changes:


Note: 
	As of SDK 2.8.1.0, the AMD APP SDK GPU runtime is not supported. To get the APP GPU runtime file,
	install the Catalyst driver. The SDK 2.8.1.0 runtime supports only CPU hardware; it is installed under
	/opt/AMDAPP/
	
	Recommandations for GPU user:
	Install 13.10 (or later) Catalyst driver then install SDK 2.8.1.0 to avoid the CPU RT files installation.

1.	How to install Linux APP on a client machine?
ANs:    Extract the Linux APP package using the below command.
        #tar xvzf <package name>
        Run the Install-AMD-APP.sh file to install APP on the client machine
        #sudo ./Install-AMD-APP.sh    
        

2.	What are the steps performed by the new installer (Install-AMD-APP.sh).
ANs:    Extract the Linux APP package .
        Extract the ICD tar file.
        Remove the previous/earlier Linux SDK files from static location in user machine ( from   /opt/AMDAPP)
        Copy the Linux SDK binaries/samples to static location ( to  /opt/AMDAPP)
	Copy the OpenCL runtime files to /opt/AMDAPP/
        Copy ICD files to /etc/
	Add environment variables to /etc/profile
	Add library path(<APP SDK>/lib/x86, /x86_64) to /etc/ld.so.conf.d/amdapp_x86/x64.conf
	Run command "sudo ldconfig -v"
	Logout and Login will reflect the environment variables.(system reboot)



3.	Do I need to export library path (<APP SDK>/lib/x86, /x86_64) ?
Ans:    No, the environment variables are set globally by the new installer scripts, so one need not to set any library 
        path(<APP SDK>/lib/x86, /x86_64).

4.	Do I need to export AMDAPPSDKROOT?
Ans:    No 

5.	Do I need to export LD_LIBRARY_PATH?
Ans:    No 

6.	Do the environment variables reflect to all users?
Ans:    Yes, the new installer scripts set the environment variables globally and hence the environment variables reflect
        to   all users.

7.	Do the environment variables need to be set by a user  if another user has already installed the Linux APP SDK      
        on a client machine?
Ans:    No Need to set the environment variables.

8.	Where is the Linux APP SDK installed?
Ans:    Installed under /opt/AMDAPP/

9.	Does the system reboot automatically after Linux APP installation?
Ans:    No, but Reboot Required after AMD APP installation.

10.	Does the Linux Installer report any errors?
Ans:    Yes, on Opensuse and Ubuntu we noticed "ldconfig error : path not found error" while clearing cache.
        It does not affect anything on the client machine

11.	What should I change if I don't want to install under /opt/AMDAPP.
Ans:    "default-install_lnx.pl" file need to be updated/modified with the new location of your choice

12.	How to change/update The Environment variables if not working.
Ans:	a) Open  /etc/profile and then check the AMDAPPSDKROOT and LD_LIBRARY_PATH settings
	b) Also check    /etc/ld.so.conf.d/amdapp_x86.conf  and /etc/ld.so.conf.d/amdapp_x86_64.conf


13. 	For use of individually downloaded samples with Catalyst 13.10 drivers or later without installing any SDK, export the glew/glut files manually.  		To do the following.   (Sample downloadlink: http://developer.amd.com/tools/heterogeneous-computing/amd-accelerated-parallel-processing-app-sdk/samples-demos/)

                     	For 32bit Linux OS:
                                Unzip the downloaded sample package using the command #unzip <samplename.zip>      e.g: #unzip BoxFilterGL.zip
                                Go to the unzipped sample folder                                                   e.g: # cd BoxFilterGL        
                                #export AMDAPPSDKROOT=`pwd`
                                #export LD_LIBRARY_PATH=$AMDAPPSDKROOT/lib/x86
                    
		    	For 64bit Linux OS:
                                Unzip the downloaded sample package using the command #unzip <samplename.zip>      e.g: #unzip BoxFilterGL.zip
                                Go to the unzipped sample folder                                                   e.g: #export AMDAPPSDKROOT=`pwd`
                                #export LD_LIBRARY_PATH=$AMDAPPSDKROOT/lib/x86:$AMDAPPSDKROOT/lib/x86_64

14.     How to Install AMD APP manually.
Ans:    To Install manually, please follow below steps.
	i)   untar the AMD-APP-SDK-v2.8.1.0-RC2-lnx32.tgz for 32-bit OS, use the command #tar -xvzf <package name> . This will 
             create a folder with name AMD-APP-SDK-v2.8.1.0-RC2-lnx32. All required files can be found inside the folder
		For 64bit:
      	     untar the AMD-APP-SDK-v2.8.1.0-RC2-lnx64.tgz for 64-bit OS, use the command #tar -xvzf <package name> . This will 
             create a folder with name AMD-APP-SDK-v2.8.1.0-RC2-lnx64. All required files can be found inside the folder.
	ii)  untar the icd-registration.tgz using the command #tar -xvzf icd-registration.tgz . This will create folder 	     with name etc/OpenCL in the current directory
	iii) Copy the above etc/OpenCL ICD folder to /etc/
	iv)  Open the terminal, go the the SDK folder(AMD-APP-SDK-v2.8.1.0-RC2-lnx64/32), then run the sample
	     #Now go to sample folder and then run any sample.
	V)   Create a symlink under /usr/lib in case GPU RT is installed from Catalyst driver
		# ln -s libOpenCL.so.1 libOpenCL.so

15.	How to Build samples?
Ans:	When building on Linux systems, the GL  samples requires libGLU.so and development files for OpenGL and for the OpenGL utility library.  In some 	 cases this may not be already installed on your system.  In such cases you may need to install these libraries/files on your system.In order to 		build the samples, create a symlink libGLU.so to libGLU.so.1 if required.

16.  Why GL samples are failing on Ubuntu?
Ans: libGL.so.1 file should be linked to /usr/lib32/fglrx/fglrx-libGL.so.1.2 for 64bit and /usr/lib/fglrx/fglrx-libGL.so.1.2 for 32bit, fails if linked to /usr/lib/x86_64-linux-gnu/mesa/libGL.so.1 for 64bit and /usr/lib/i386-linux-gnu/mesa/libGL.so.1 for 32bit, For more details refer the below links
http://phoronix.com/forums/showthread.php?7351-Does-fglrx-s-libGL-so-1-2-have-wrong-soname
https://bugs.launchpad.net/ubuntu/+source/mesa/+bug/943162

17. What are the packages to be installed on 64bit OS to run all the samples?

Open-Suse install packages => libX11-devel-32bit,Mesa-libGLU-devel-32bit,libXmu.so.6,libtiff3,libtiff5
Ubunutu install packages => g++,libglu1-mesa-dev,g++-multilib,ia32-libs,libtifiles2-5
Redhat install packages => glibc-devel.i686,libstdc++-devel.i686,mesa-libGL-devel.i686,mesa-libGLU-devel.i686,libXmu.i686,libXi.i686,gtk2.i686,gst*.i686

