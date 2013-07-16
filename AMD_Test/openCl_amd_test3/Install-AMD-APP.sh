if [ `whoami` != root ]; then
echo "Exiting..Please run this script as sudo ./Install-AMD-APP.sh"
exit
fi
perl default-install_lnx_64.pl 
echo "*****Please refer 'AMD_APPSDK_v2.8.1.0.log' in the same directory*****";
echo "*****Refer 'README.txt' for FAQ/help in the same directory********";

