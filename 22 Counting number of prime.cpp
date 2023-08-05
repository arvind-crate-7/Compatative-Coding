 #include<iostream>
 #include<vector>
 using namespace std;
 int countPrimes(int n) {
    int count=0;

    //initially we consider all number are prime number
    vector<bool> prime(n+1,true);

    //0 and 1 are not a prime number
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        
        //check it is true or false
        if(prime[i]){

            //means it is prime number
            count++;
            
            //mark number come in that i value table are not a prime number
            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    cout<<"The  number of prime before the number "<<n<<" is"<<countPrimes(n);
}
