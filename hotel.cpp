#include <iostream>
using namespace std;
class A
{
    public:

    int Room , Flor , cont , Rcode;
    float dis , full_pay;
    char Name[30] , mail[40] , pmt;
    double Number;
    int pay , a , date , code;

    void gain()
    {

        cout << "\t"<< endl <<"::<->:: WELCOME TO D33PXT HOTEL ::<->:: " << endl << endl;
        cout << "Enter Your Name : ";
        cin >> Name;
        cout << "Enter Your Mobile Number : ";
        cin >> Number;
        cout << "Enter Your G-MAIL id : ";
        cin >> mail;

        cout << "How Many Days Do you Want the room : ";
        cin >> date;
    }
    void print_x1()
    {
       
        cout << endl <<"Hello Everyone I have come to the attention of a member of my hotel" << endl << endl;

        cout << "FLOAR" << "\t" << "NON AC / AC" << "\t" << "PRICE" << endl;
        cout << "1ST" << "\t" << "NON AC" << "\t" << "\t"  << "1000" << endl;
        cout << "2ND" << "\t" << "NON AC" << "\t" << "\t"  << "1000" << endl;
        cout << "3RD" << "\t" << "AC" << "\t" << "\t"  << "1500" << endl;
        cout << "4TH" << "\t" << "AC" << "\t" << "\t"  << "2000" << endl;
        cout << "5TH" << "\t" << "AC" << "\t" << "\t"  << "2000" << endl;
        cout <<  endl  <<"\t" <<"!---Select The Floar---!" << endl << endl;

        cout << "Floar [1]" << endl;
        cout << "Floar [2]" << endl;
        cout << "Floar [3]" << endl;
        cout << "Floar [4]" << endl;
        cout << "Floar [5]" << endl;
        cout << endl << "Floar = ";
        cin >> Flor;

        switch(Flor)
        {
            case 1:
            {
                cout << "\t" <<"Welcome To First Flor" << endl;
                cout << "\t" <<"::: select Room :::" << endl << endl;
                cout << "F1 ROOM NO. [1]" << endl;
                cout << "F1 ROOM NO. [2]" << endl;
                cout << "F1 ROOM NO. [3]" << endl;
                cout << "F1 ROOM NO. [4]" << endl;
                cout << "F1 ROOM NO. [5]" << endl;
                cout << "F1 ROOM NO. [6]" << endl;
                cout << "F1 ROOM NO. [7]" << endl;
                cout << "F1 ROOM NO. [8]" << endl;
                cout << "F1 ROOM NO. [9]" << endl;
                cout << "F1 ROOM NO. [10]" << endl;
                cont = (1000 * date);
            }
            break;

            case 2:
            {
                cout << "\t" <<"Welcome To Secound Flor" << endl;
                cout << "\t" <<"::: select Room :::" << endl << endl;
                cout << "F2 ROOM NO. [1]" << endl;
                cout << "F2 ROOM NO. [2]" << endl;
                cout << "F2 ROOM NO. [3]" << endl;
                cout << "F2 ROOM NO. [4]" << endl;
                cout << "F2 ROOM NO. [5]" << endl;
                cout << "F2 ROOM NO. [6]" << endl;
                cout << "F2 ROOM NO. [7]" << endl;
                cout << "F2 ROOM NO. [8]" << endl;
                cout << "F2 ROOM NO. [9]" << endl;
                cout << "F2 ROOM NO. [10]" << endl;

                cont = (1000 * date);
            }
            break;

            case 3:
            {
                cout << "\t" <<"Welcome To Third Flor" << endl;
                cout << "\t" <<"::: select Room :::" << endl << endl;
                cout << "F3 ROOM NO. [1]" << endl;
                cout << "F3 ROOM NO. [2]" << endl;
                cout << "F3 ROOM NO. [3]" << endl;
                cout << "F3 ROOM NO. [4]" << endl;
                cout << "F3 ROOM NO. [5]" << endl;
                cout << "F3 ROOM NO. [6]" << endl;
                cout << "F3 ROOM NO. [7]" << endl;
                cout << "F3 ROOM NO. [8]" << endl;
                cout << "F3 ROOM NO. [9]" << endl;
                cout << "F3 ROOM NO. [10]" << endl;

                cont = (2000 * date);
            }
            break;

            case 4:
            {
                cout << "\t" <<"Welcome To Four Flor" << endl;
                cout << "\t" <<"::: select Room :::" << endl << endl;
                cout << "F4 ROOM NO. [1]" << endl;
                cout << "F4 ROOM NO. [2]" << endl;
                cout << "F4 ROOM NO. [3]" << endl;
                cout << "F4 ROOM NO. [4]" << endl;
                cout << "F4 ROOM NO. [5]" << endl;
                cout << "F4 ROOM NO. [6]" << endl;
                cout << "F4 ROOM NO. [7]" << endl;
                cout << "F4 ROOM NO. [8]" << endl;
                cout << "F4 ROOM NO. [9]" << endl;
                cout << "F4 ROOM NO. [10]" << endl;

                cont = (2000 * date);
            }
            break;
            
            case 5:
            {
                cout << "\t" <<"Welcome To Fifth Flor" << endl;
                cout << "\t" <<"::: select Room :::" << endl << endl; 
                cout << "F5 ROOM NO. [1]" << endl;
                cout << "F5 ROOM NO. [2]" << endl;
                cout << "F5 ROOM NO. [3]" << endl;
                cout << "F5 ROOM NO. [4]" << endl;
                cout << "F5 ROOM NO. [5]" << endl;
                cout << "F5 ROOM NO. [6]" << endl;
                cout << "F5 ROOM NO. [7]" << endl;
                cout << "F5 ROOM NO. [8]" << endl;
                cout << "F5 ROOM NO. [9]" << endl;
                cout << "F5 ROOM NO. [10]" << endl;
                cont = (3000 * date);
              
            }
            break;

            default:
            {
                cout << "INVALID NUMBER PLS TRY AGAIN " << endl;
            }
        }
        cout << endl << "Room = ";
        cin >> Room;
    }
    
};
class B : public A
{
    public:
    void payment1()
    {
        jump:
        cout << ":: HWhy Would You Pay ::" << endl;
        cout << "online Pay [1]" << endl;
        cout << " case pay  [2]" << endl;
        cin >> pay;

        switch(pay)
        {
            case 1:
            {
                cout << "::-:: online Pay ::-::" << endl;
                cout << " Select payment " << endl << " Paytm [11]" << "\t" << " Phone Pay [22]" << "\t""\t" << " Google pay [33]" << endl;
                cout << "Select Your Application Use Paymnet : ";
                cin >> a;

                if(a==11)
                {
                    cout << "\t" <<" Paytm " << endl;
                    cout << "Payment Price = " << cont << endl;
                    cout << "confirm payment (Y/ N): ";
                    cin >> pmt;
                    if(pmt=='Y','y')
                    {
                        cout << endl <<"THX FOR PAYMENT {I WILL SENT YOU ROOM CODE IN YOUR GMAIL , PLS CHECK}" << endl;
                    
                        cout << "\t" <<"ROOM CODE = 1099" << endl;
                        Rcode = 1099;
                    }
                    else{
                        goto jump;
                    }
                }
                else if(a==22)
                {
                    cout << "\t" <<" Phone Pay " << endl;
                    cout << "Payment Price = " << cont << endl;
                    cout << "confirm payment (Y/ N): ";
                    cin >> pmt;
                    if(pmt=='Y','y')
                    {
                        cout << endl <<"THX FOR PAYMENT {I WILL SENT YOU ROOM CODE IN YOUR GMAIL , PLS CHECK}" << endl;

                        cout << "\t" <<"ROOM CODE = 5612" << endl;
                        Rcode = 5612;
                    }
                    else
                    {
                        goto jump;
                    }
                }
                else if(a==33)
                {
                    cout << "\t" <<" Google Pay " << endl;
                    cout << "Payment Price = " << cont << endl;
                    cout << "confirm payment (Y/ N): ";
                    cin >> pmt;
                    if(pmt=='Y','y')
                    {
                        cout << endl <<"THX FOR PAYMENT {I WILL SENT YOU ROOM CODE IN YOUR GMAIL , PLS CHECK}" << endl;

                        cout << "\t" <<"ROOM CODE = 2300" << endl;
                        Rcode = 2300;
                    }
                    else{
                        goto jump;
                    }
                }
                else{
                    goto jump;
                }
            }
            break;

            case 2:
            {
                cout << "::-:: Offline Pay ::-::" << endl;
                cout << "Payment Price = " << cont << endl;
                cout << "confirm payment (Y/ N): ";
                cin >> pmt;
                if(pmt=='Y','y')
                {
                    cout << endl <<"THX FOR PAYMENT {I WILL SHO YOU YOUR ROOM CODE}" << endl;

                    cout << "\t" <<"ROOM CODE = 2300" << endl;
                    Rcode = 7306;
                }
                else{
                    goto jump;
                }
            }
            break;

            default:
            {
                cout << "INVALID NUMBER PLS TRY AGAIN " << endl;
            }
        }
    }
};
class C : public B
{
    public:
    void print_room()
    {
        jump1:
        cout << "Enter Your Room Code : ";
        cin >> code;

        switch(code)
        {
            case 1099:
            {
                    cout << "confirm Your Room" << endl;
                    cout << "!!--I HOPE U ARE ENJOY--!!" << endl;
            }
            break;

            case 5612:
            {
                cout << "confirm Your Room" << endl;
                cout << "!!--I HOPE U ARE ENJOY--!!" << endl;
            }
            break;

            case 2300:
            {
                cout << "confirm Your Room" << endl;
                cout << "!!--I HOPE U ARE ENJOY--!!" << endl;
            }
            break;

            case 7306:
            {
                cout << "Confirm your Room" << endl;
                cout << "!!--I HOPE U ARE ENJOY--!!" << endl;
            }

            default:
            {
                cout << "Sorry , Your Number is invalid" << endl << endl << endl;
                goto jump1;
            }
            break;
        }
    }
};
class D : public C
{
    public:
    void Bill()
    {
        cout << endl << endl << endl <<"\t" << "D33PXT HOTEL BILL" << endl;
        cout << endl << endl << "Your Name = " << Name << endl;
        cout << "Your Number = " << Number << endl;
        cout << "Your Gmail = " << mail << endl;
        
        cout << "_____________________________" << endl;

        cout << "Your FLoar           " << Flor << endl;
        cout << "Your Room            " << Room << endl;
        cout << "Check Out Date       " << date << endl;
        cout << "_____________________________" << endl;
        dis = (cont / 15);
        cout << "DISCOUNT 15%         " << dis << endl;
        cout << "_____________________________" << endl;
        full_pay = cont - dis;
        cout << "FINAL PAY            " << full_pay << endl;
        cout << "!! THANK YOU !!" << endl;
    }
}Q;
int main()
{
    Q.gain();
    Q.print_x1();
    Q.payment1();
    Q.print_room();
    Q.Bill();
}
