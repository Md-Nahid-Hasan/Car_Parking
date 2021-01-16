#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int bus=0,private_car=0,cng=0,motor_bike=0;
    int vehicle,total_count,total_amount;
    int bus_amount=0,private_car_amount=0,cng_amount=0,motor_bike_amount=0,bus_count=0,     private_car_count=0,cng_count=0,motor_bike_count=0;
    while(true)
    {
    cout<<"Parking Zone"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"1.Add Bus"<<endl;
    cout<<"2.Add Private car"<<endl;
    cout<<"3.Add CNG"<<endl;
    cout<<"4.Add Motor Bike"<<endl;
    cout<<"5.Details"<<endl;
    cout<<"6.Remove Bus"<<endl;
    cout<<"7.Remove Private car"<<endl;
    cout<<"8.Remove CNG"<<endl;
    cout<<"9.Remove Motor Bike"<<endl;
    cout<<"0.Remove Data"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Press any number: ";
    cin>>vehicle;

    if(vehicle==1)
    { system("cls");

        if(bus_count<10)
        {
        bus++;
        bus_amount=bus_amount+300;
        bus_count=bus_count+1;
        cout<<"Bus added successfully\n\n" ;
        }
       else
        cout<<"No more Bus parking\n"<<endl;
    }

    else if(vehicle==2)
    {system("cls");
        if(private_car_count<10)
        {
        private_car_amount=private_car_amount+250;
        private_car_count=private_car_count+1;
        private_car++;
        cout<<"Private Car added successfully\n\n" ;
        }
       else
        cout<<"No more Private Car parking\n"<<endl;
    }
    else if(vehicle==3)
    {system("cls");
        if(cng_count<10)
        {
        cng_amount=cng_amount+150;
        cng_count=cng_count+1;
        cng++;
        cout<<"CNG added successfully\n\n" ;
        }
        else
            cout<<"No more CNG parking\n"<<endl;
    }
    else if(vehicle==4)
    {system("cls");
        if(motor_bike_count<10)
        {
        motor_bike_amount=motor_bike_amount+100;
        motor_bike_count=motor_bike_count+1;
        motor_bike++;
        cout<<"Motor Bike added successfully\n\n" ;
        }
        else
            cout<<"No more Motor Bike parking\n"<<endl;
    }

    else if(vehicle==6)
    {system("cls");
    if(bus_count>0){
        bus_amount=bus_amount-300;
        bus_count=bus_count-1;
        bus--;
        cout<<"Bus removed successfully\n\n" ;
    }
    else
    {
        cout<<"No more Buses are left\n\n";
    }
    }

    else if(vehicle==7)
    {system("cls");
        if(private_car_count>0){
        private_car_amount=private_car_amount-250;
        private_car_count=private_car_count-1;
        private_car--;
        cout<<"Private Car removed successfully\n\n" ;
    }
    else
    {
        cout<<"No more Private Cars are left\n\n";
    }
    }
    else if(vehicle==8)
    {system("cls");
        if(cng_count>0)
        {
        cng_amount=cng_amount-150;
        cng_count=cng_count-1;
        cng--;
        cout<<"CNG removed successfully\n\n" ;
    }
    else
    {
        cout<<"No more CNG are left\n\n";
    }
    }
    else if(vehicle==9)
    {system("cls");
        if(motor_bike_count>0)
        {
        motor_bike_amount=motor_bike_amount-100;
        motor_bike_count=motor_bike_count-1;
        motor_bike--;
        cout<<"Motor Bike removed successfully\n\n" ;
    }
    else
    {
        cout<<"No more Motor Bikes are left\n\n";
    }
    }

    else if(vehicle==5)
    {system("cls");
        total_count=bus_count+private_car_count+cng_count+motor_bike_count;
        total_amount= bus_amount+private_car_amount+cng_amount+motor_bike_amount;
        cout<<"Total parking of Buses are         = "<<bus<<"\n"<<endl;
        cout<<"Total parking of Private Cars are  = "<<private_car<<"\n"<<endl;
        cout<<"Total parking of CNG are           = "<<cng<<"\n"<<endl;
        cout<<"Total parking of Motor Bikes are   = "<<motor_bike<<"\n"<<endl;
        cout<<"-------------------------------------- "<<"\n"<<endl;
        cout<<"Total parking vehicles are         = "<<total_count<<"\n"<<endl;
        cout<<"-------------------------------------- "<<"\n"<<endl;
        cout<<"Total amount                       = "<<total_amount<<"\n"<<endl;
    }
    else if(vehicle==0)
    {system("cls");
        total_amount=0;
        total_count=0;
        bus=0;
        private_car=0;
        cng=0;
        motor_bike=0;
    }
    else {system("cls");
        cout<<"Please enter correct input!\n"<<endl;

    }
    }
    return 0;
}
