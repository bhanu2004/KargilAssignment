#include <iostream>
using namespace std;


int strlength(char* str){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

void strCopy(char* dest, char* src){
    int i=0;
    while(src[i]!='\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void reverse(char* str){
    int i=0;
    int j= strlength(str)-1;
    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

void concat(char* str1, char* str2){
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    int j=0;
    while(str2[j]!='\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main()
{
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10] = "";
    
    cout<<"String 1:- "<<str1<<endl;
    cout<<"String 2:- "<<str2<<endl;
    cout<<"String 3:- "<<str3<<endl;
    cout<<endl;
    
    cout<<"length of String 1: "<<strlength(str1)<<endl;
    cout<<"length of String 2: "<<strlength(str1)<<endl;
    cout<<endl;
    
    cout<<"copy string 1 to string 3 ...."<<endl;
    strCopy(str3,str1);
    cout<<"String 3:- "<<str3<<endl;
    cout<<endl;
    
    cout<<"concat string 1 and string 2 ...."<<endl;
    concat(str1,str2);
    cout<<"String 1:- "<<str1<<endl;
    cout<<endl;
    
    cout<<"reverse string 1 ...."<<endl;
    reverse(str1);
    cout<<"String 1:- "<<str1<<endl;
    
    

    return 0;
}