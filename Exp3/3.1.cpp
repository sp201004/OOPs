// #include <iostream>
// using namespace std;
// inline int cmp(int x,int y,int z)
// {
//     if(x>y&&x>z)
//     return(x);
//     else if(y>z)
//     return(y);
//     else
//     return(z);
    
// }
// int main()
// {
//     int a,b,c;
//     cout<<"enter three numbers:"<<endl;
//     cin>>a>>b>>c;
//     cout<<cmp(a,b,c)<<" is larger"<<endl;
//     return 0;
    
// }

#include <iostream>

using namespace std;

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int findLargest(int a, int b, int c) {
    return max(max(a, b), c);
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    int largest = findLargest(num1, num2, num3);
    
    cout << "The largest number is: " << largest << endl;
    
    return 0;
}
