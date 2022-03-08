#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;
struct login{
    char admin_name[50];
    char admin_username[50];
    char admin_email[50];
    char admin_password[20];
    char admin_fixed_password[20];
    };
    class account{
	int id;
	char name[50];
	char username[20];
	char password[10];

	char location[50];

public:
	void create_admin_account();

	void show_account() const;

	void create_trip();
	void show_trip() const;

	void report() const;
	int ret_id() const;
};
void admin_info();
void user_info();
void write_trip();
void display_trip();
void user_display_trip();
void admin_display_trip();
void delete_trip(int n);
void user_cancel_trip(int n);
void write_admin_account();
void write_user_account();

void admin_registration();
void admin_login();
void user_registration();
void user_login();

void admin_home();
void user_home();

void red(){
    cout<<"\033[1;31m";
}
void yellow(){
    cout<<"\033[1;33m";
}
void green(){
    cout<<"\033[0;32m";
}
void blue(){
    cout<<"\033[0;34m";
}
void purple(){
    cout<<"\033[0;35m";
}
void cyan(){
    cout<<"\033[0;36m";
}
void white(){
    cout<<"\033[0;37m";
}
void reset(){
  cout<<"\033[0m";
}

void pasue(){
    for(int y=0; y<=8888888; ++y){
    }
}

void intro(){
    green();
    char name1[] = "\n\n\t\t\t      WELCOME TO HOLIDAY TRIP     \n";
    char name2[] = "\t\t\t======================================\n";
    char name3[] = "\t\t\tFind your best holiday destination here...\n\n\n";
    char name4[] = "\t\t\t\tPRESS ENTER TO CONTINUE...\n\n\n";
    for(int x=0; name1[x]!=NULL; x++){
        printf("%c",name1[x]);
        pasue();
    }
    for(int x=0; name2[x]!=NULL; x++){
        printf("%c",name2[x]);
        pasue();
    }
    for(int x=0; name3[x]!=NULL; x++){
        printf("%c",name3[x]);
        pasue();
    }
    for(int x=0; name4[x]!=NULL; x++){
        printf("%c",name4[x]);
        pasue();
    }
    getchar();
    reset();
}
void home(){
    cout<<"\n\t\t================================================="<<endl;
    cout<<"\t\t|                                               |"<<endl;
    cout<<"\t\t|               Your Identity?                  |"<<endl;
    cout<<"\t\t|           ----------------------              |"<<endl;
    cout<<"\t\t|                                               |"<<endl;
    cout<<"\t\t|               1. Admin                        |"<<endl;
    cout<<"\t\t|               2. User                         |"<<endl;
    cout<<"\t\t|                                               |"<<endl;
    cout<<"\t\t=================================================\n\n"<<endl;;
    cout<<"\t\tENTER YOUR ANSWER : ";

    int iden,num;

    cin>>iden;
    switch(iden){
    case 1:
        admin_info();
        cin>>iden;
        switch(iden){
        case 0:
            home();
            break;
        //case 1:
            //admin_registration();
            //break;
        //case 2:
            //admin_login();
           // break;
        }
        break;
    case 2:
        user_info();
        cin>>iden;
        switch(iden){
        case 0:
            home();
            break;
        //case 1:
            //user_registration();
           // break;
        //case 2:
            //user_login();
            //break;
        //case 3:
            //display_trip();
            //break;
        }
        break;
    }
}                                             /*===================================================*/
int main(){
    intro();
    home();

    return 0;
}
void admin_info(){
    cout<<"\t\t                                            "<<endl;
    cout<<"\t\t                 WELCOME ADMIN              "<<endl;
    cout<<"\t\t              -------------------           "<<endl;
    cout<<"\t\t               1. Registration              "<<endl;
    cout<<"\t\t               2. Login                     "<<endl;
    cout<<"\t\t               0. Back To Home              "<<endl;
    cout<<"\t\t        =============================\n\n"<<endl;
    cout<<"\n\t\t\tENTER YOUR ANSWARE : ";
}
void user_info(){
    cout<<"\t\t                                           "<<endl;
    cout<<"\t\t                 WELCOME USER              "<<endl;
    cout<<"\t\t               ----------------            "<<endl;
    cout<<"\t\t               1. Registration             "<<endl;
    cout<<"\t\t               2. Login                    "<<endl;
    cout<<"\t\t               3. Find Trips               "<<endl;
    cout<<"\t\t               0. Back To Home             "<<endl;
    cout<<"\t\t        =============================\n\n"<<endl;
    cout<<"\n\t\t\tENTER YOUR ANSWARE : ";
}
