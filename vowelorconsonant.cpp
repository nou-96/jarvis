//uses a simplest way
#include <iostream>
using namespace std;
int main() 
{
    char c;
    int vowel;
    cout<<"Enter an alphabet:";
    cin>>c;
    vowel = ( c == 'a'|| c =='e' || c =='i' || c =='o' || c =='u');
    if(vowel)
      cout<<c<<"is a vowel";
    else
      cout<<c<<"is a consonant";
    return 0;
}
