#include<iostream>
using namespace std;
int main()
/*{
int n;
cout<<"Enter the size of n:"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i-j+1<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}
*/


//13.new patter A A A
    //            B B B
      //          C C C
     /* {
        int n;
        cin>>n;
        int i=1;
        while(i<=n){
            int j=1;
            char ch = 'A'+j-1;
            while(j<=n){
                cout<<ch;
                j=j+1;
            }
            cout<<endl;
            i=i+1;
        }
      }*/

//14. print A to Z
/*{
    int n;
    cin>>n;
    int i=1;
    char count ='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count;
            count = count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}*/

//15 print pattern   A B C
              //     B C D
              //     C D E
/*{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch ='A'+i+j-2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}*/

//16. print A 
    //        B B
      //      C C C
/*{
     int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch =('A'+i-1);
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}*/

/*//17.print A 
           B C 
           C D E
           E F G

{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch=('A'+i+j-2);
        while(j<=i){
            cout<<ch;
            j=j+1;
        }
        cout<<endl; 
        i=i+1;  

    }
}*/
//18. print the pattern   D
                     //   C D 
                     //   B C D 
                      //  A B C  D
/*{
     int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
         char ch ='A'+n-i;
        while(j<=i){
            cout<<ch;
            ch =ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}*/


//19.  star pattern with  spaces;
//                 *
//                **
//               *** 
//              ****

/*{
  int n;
  cin >> n;
  int i=1;
  while(i<=n){
    int space = n-i;
    while(space){
    cout <<" ";
    space = space-1;
    }
  int j=1;
  while(j<=i){
cout<<"*";
j=j+1;
  }
  cout<<endl;
  i=i+1;
}
}*/

// print the pattern       1
//                       2 2
 //                     3 3 3
 //                   4 4 4 4
/*{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
        cout<<" ";    
        space=space-1;
    }
    int j=1;
    while(j<=i){
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
}*/


// print the pattern        1
//                         23
//                        456  
/*{                      78910
     int n;
     cin>>n;
     int i=1;
     int count=1;
     while(i<=n){
     int space =n-i; 
     while(space){
        cout<<" ";
        space=space-1;
     }
     int j=1;
     while(j<=i){  
        cout<<count;
        count=count+1;
        j=j+1;
     }
     cout<<endl;
     i=i+1;
}
}*/

// print the patter        //     1
                          //     121
                          //    12321
                          //   1234321
/*{
     int n;
     cin>>n;
     int i=1;
     while(i<=n){
     int space =n-i; 
     while(space){
        cout<<" ";
        space=space-1;
     }
     int j=1;
     while(j<=i){
        cout<<j;
        j=j+1;
     }
     int start=i-1;
     while(start){
     cout<<start;
     start=start-1;
     }
     cout<<endl;
     i=i+1;
}
}*/


//print the pattern Dabangg pattern
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
    }
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
      }
       cout<<endl;
        i=i+1;
    }
}

