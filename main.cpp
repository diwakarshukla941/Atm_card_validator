#include<iostream>
#include<algorithm>

using namespace std;

bool valid(string atm){
    reverse(atm.begin(), atm.end());
    int sum = 0;
    for(int i = 0 ;i <atm.length();i++){
        int digit = atm[i] - '0';
        if(i %2 == 1){
            digit *= 2;
            if(digit > 9 ){
                digit -= 9;
            }
        }
        sum += digit;
    }
    return (sum %10 == 0);

}


int main(){
    cout<< "Enter Atm card Number ";
    string atm;
    cin>>atm;

    if(valid(atm)){
        system("cls");
        cout<<"Valid atm"<<endl;
    }else{
        cout<<"not a valid atm"<<endl;
    }


}