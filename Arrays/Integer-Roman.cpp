/* Even though integer-roman is possible for whole numbers but i wanted to solve those for the decimal numbers as well so here is the solution for that
for example : 49.49 => XL.XL or 90.90 => XC.XC and so on
*/

#include <bits/stdc++.h>
using namespace std;

string convertToRoman(int numb){
    string ans ="";
    while(numb>0){
        if(numb>=1000){
            ans += 'M';
            numb = numb-1000;
        }
        else if(numb >=900){
            ans+="CM";
            numb = numb-900;
        }
        else if(numb>=500){
            ans+='D';
            numb = numb-500;
        }
        else if(numb>=400){
            ans+="CD";
            numb = numb-400;
        }
        else if(numb>=100){
            ans+='C';
            numb = numb-100;
        }
        else if(numb>=90){
            ans+="XC";
            numb = numb-90;
        }
        else if(numb >= 50){
            ans+='L';
            numb = numb-50;
        }
        else if(numb>=40){
            ans+="XL";
            numb = numb-40;
        }
        else if(numb>=10){
            ans+='X';
           numb = numb-10;
        }
        else if(numb == 9){
            ans+="IX";
            numb = numb-9;
        }
        else if(numb>=5){
            ans+='V';
            numb = numb-5;
        }
        else if(numb==4){
            ans+="IV";
            numb = numb-4;
        }
        else{
            ans+='I';
            numb=numb-1;
        }
        
    }
    return ans;
}


string intToRoman(string num) {
        
        int pos = num.find('.');
        string intPartStr = num.substr(0, pos);
        string decPartStr = num.substr(pos + 1);
        
        int wnum = stoi(intPartStr);
        int dnum = stoi(decPartStr);
        
        string ans = "";
        ans = convertToRoman(wnum) + "." + convertToRoman(dnum);
        return ans;
}

int main() {
    
    string num;
    cin>>num;
    
    string ans = intToRoman(num);
    cout<< ans << endl;

    return 0;
}
