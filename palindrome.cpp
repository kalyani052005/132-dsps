#include<iosrtream>
#include<cstring>
#include<cctype>
using namespace std;
char stack[30];
int top=-1,len;
void push(char ele)
{
if(top==n-1)
{
cout<<"stack is ovderflow\n";
}
else
{
top++;
stack[top]=ele;
}
}
char pop()
{
if(top==-1)
{
cout<<"stack is underflow\n";
return'\0';
}
else
{
char ele=stack[top];
top--;
return ele;
}
}
int palindrome(char str[])
{
int actualLen=0;
for(i=0;i<len;i++)
{
if(str[i]!='')
{
push(tolower(str[i]));
actualLen++;
}
}
return 1;
}
int main()
{
char m[30];
cout<<"enter string to check";
cin>>getline(m,30);
len=strlen(m);
if(palindrome(m))
{
else
{
cout<<"string is not a palindrome\n";
}
return 0;
}














