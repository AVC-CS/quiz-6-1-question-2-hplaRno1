/***************************************************
 * Code your program here
 ***************************************************/
 #include  <iostream>
 #include <fstream>
 using namespace std;

 int writeFile(string);

 int readFile(string);

 int writeFile(string filename){
    //code
    ofstream ofs;
    ofs.open("employees.txt");
    if(!ofs){
        cout << "Failed to create file!" << endl;
        exit(0);
    }
    int Total, id, salary;
    string name, department;
    cout << "How many employees are there?: " << endl;
    cin >> Total;
    ofs << Total;
    for(int i = 0; i < Total; i++){
        cout << "Enter the ID: ";
        cin >> id;
        ofs << id << " ";
        cout << "Enter the employee's name: ";
        cin >> name;
        ofs << name << " ";
        cout << "Enter which department they work in: ";
        cin >> department;
        ofs << department << endl;
        cout << "Enter their salary: ";
        cin >> salary;
        ofs << salary << " ";
    }
    return Total;
 }

int readFile(string filename){
    ifstream ifs;
    ifs.open("employees.txt");
    if(!ifs){
        cout << "Failed to open file!" << endl;
        exit(0);
    }
    int Total, id, salary;
    string name, department;
    for (int i = 0; i < Total; i++){
        cout << "Information: " << endl;
        ifs >> id >> name >> department >> salary;
    }
    return Total;
}