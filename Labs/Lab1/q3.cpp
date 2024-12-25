#include<iostream>
using namespace std;
int main()
{
    char str[100] = "azcbobobegghakl";
    int vowel = 0;
    for(int i = 0; str[i]; i++)  
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
		    vowel++;
        }
    }
    cout << "Number of vowels: " << vowel;
    return 0;
    system("pause");
}