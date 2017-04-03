#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<iostream>

using namespace std;

int main()
{
    pid_t pid;

    //membuat proses baru
    pid = fork();

    if(pid < 0) //jika terjadi error
    {
        fprintf(stderr, "gagal membuat anak proses");
        return 1;
    }

    else if(pid == 0) //proses anak berhasil dibuat
    {
        printf("Berhasil");
        while(1){
            cout<<"dari child proses"<<endl;
        }
    }

    else {
        wait(NULL);
        cout<<"Child sudah selesai"<<endl;
         while(1){
            cout<<"dari parent proses"<<endl;
        }
    }

    return 0;

}
