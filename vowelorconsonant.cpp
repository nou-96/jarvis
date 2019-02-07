//uses a simplest way
#include <iostream>
using namespace std;
int main() 
{
    char c;
    int lvowel,uvowel;
    cout<<"Enter an alphabet:";
    cin>>c;
    lvowel = ( c == 'a'|| c =='e' || c =='i' || c =='o' || c =='u');
    uvowel = ( c == 'A'|| c =='E' || c =='I' || c =='O' || c =='U');
    if(lvowel || uvowel )
      cout<<"Vowel";
    else
      cout<<"Invalid";
    return 0;
}
