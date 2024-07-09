#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void displayMenu() {
    cout << "Hospital Management System" << endl;
    cout << "-------------------------" << endl;
    cout << "1. Doctor's/Nurse's Section" << endl;
    cout << "2. Patient's Section" << endl;
    cout << "3. Machine / Equipment's Section" << endl;
    cout << "4. Ward Availablity" << endl;
    cout << "5. Billing Section" << endl;
    cout << "6. Blood Bank" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
}

void doctorSection() {
    cout << "Doctor's / Nurse's Section" << endl;
    cout << "----------------" << endl;
    cout << "1. Doctor's" << endl;
    cout << "2. Nurse's" << endl;
    cout << "3. Back" << endl;
    cout << "Enter your choice: ";
}

void doctorsSection() {
    cout << "Doctor's Section" << endl;
    cout << "----------------" << endl;
    cout << "1. Add Doctor" << endl;
    cout << "2. View Doctors" << endl;
    cout << "3. Search Doctor" << endl;
    cout << "4. Back" << endl;
    cout << "Enter your choice: ";
}

void nursesSection() {
    cout << "Nurse's Section" << endl;
    cout << "----------------" << endl;
    cout << "1. Add Nurse" << endl;
    cout << "2. View Nurses" << endl;
    cout << "3. Search Nurse" << endl;
    cout << "4. Back" << endl;
    cout << "Enter your choice: ";
}

struct Doctor {
    string name;
    string field;
    int age;
    int experience;
};

vector<Doctor> doctors;

void addDoctorSection() {
    Doctor doctor;
    cout << "Enter Doctor Name: ";
    cin >> doctor.name;
    cout << "Enter Doctor Field: ";
    cin >> doctor.field;
    cout << "Enter Doctor Age: ";
    cin >> doctor.age;
    cout << "Enter Doctor Experience: ";
    cin >> doctor.experience;
    doctors.push_back(doctor);
}

void viewdoctorSection() {
    cout << "1. Dr. Joshi" << endl;
    cout << "2. Dr. Iyer" << endl;
    cout << "3. Dr. Banerjee" << endl;
    cout << "4. Dr. Gulati" << endl;
    cout << "5. Back" << endl;
    cout << "Enter your choice: ";
}

struct Nurse {
    string name;
    string field;
    int age;
    int experience;
};

vector<Nurse> nurses;

void addNurseSection() {
    Nurse nurse;
    cout << "Enter Nurse Name: ";
    cin >> nurse.name;
    cout << "Enter Nurse Field: ";
    cin >> nurse.field;
    cout << "Enter Nurse Age: ";
    cin >> nurse.age;
    cout << "Enter Nurse Experience: ";
    cin >> nurse.experience;
    nurses.push_back(nurse);
}

void viewnurseSection() {
    cout << "1. Sushmita Sister" << endl;
    cout << "2. Sushi Sister" << endl;
    cout << "3. Anamika Sister" << endl;
    cout << "4. Kiara Sister" << endl;
    cout << "5. Back" << endl;
    cout << "Enter your choice: ";
}

struct Patient {
    string name;
    string bloodgroup;
    string diseaseinjury;
    int age;
    int phonenumber;
};

vector<Patient> patients;

void addPatientSection() {
    Patient patient;
    cout << "Enter Patient's Name: ";
    cin >> patient.name;
    cout << "Enter Patient's Blood Group: ";
    cin >> patient.bloodgroup;
    cout << "Enter Patient's Disease/Injury: ";
    cin >> patient.diseaseinjury;
    cout << "Enter Patient's Age: ";
    cin >> patient.age;
    cout << "Enter Patients's Phone number: ";
    cin >> patient.phonenumber;
    patients.push_back(patient);
}

void patientsSection() {
    cout << "Patients's Section" << endl;
    cout << "----------------" << endl;
    cout << "1. Add Patient" << endl;
    cout << "2. View Patient" << endl;
    cout << "3. Search Patient" << endl;
    cout << "4. Back" << endl;
    cout << "Enter your choice: ";
}

void viewpatientSection() {
    cout << "1. Mr. Arpit Sharma" << endl;
    cout << "2. Ms. Lovely" << endl;
    cout << "3. Mr. Dharamchand" << endl;
    cout << "4. Mr. Prem Chopra" << endl;
    cout << "5. Back" << endl;
    cout << "Enter your choice: ";
}

void machineSection() {
    cout << "1. Radiography (X-ray machine )" << endl;
    cout << "2. Computed Tomography( CT Scan )" << endl;
    cout << "3. Magnetic Reasioning Imaging ( MRI Scan )" << endl;
    cout << "4. Ultrasound" << endl;
    cout << "5. Echocardiography" << endl;
}

void wardSection() {
    cout << "Ward No. 1: Rooms Available=4, Beds Available=16 " << endl;
    cout << "Ward No. 2: Rooms Available=5, Beds Available=20"<< endl;
    cout << "Ward No. 3: Rooms Available=3, Beds Available=12" << endl;
}

class Bill {
private:
    int billId;
    string patientName;
    string doctorName;
    double consultationFee;
    double medicineCharge;
    double roomCharge;
    double totalAmount;

public:
    Bill(int id, string pname, string dname, double fee, double med, double room) {
        billId = id;
        patientName = pname;
        doctorName = dname;
        consultationFee = fee;
        medicineCharge = med;
        roomCharge = room;
        totalAmount = fee + med + room;
    }

    int getBillId() {
        return billId;
    }

    string getPatientName() {
        return patientName;
    }

    string getDoctorName() {
        return doctorName;
    }

    double getConsultationFee() {
        return consultationFee;
    }

    double getMedicineCharge() {
        return medicineCharge;
    }

    double getRoomCharge() {
        return roomCharge;
    }

    double getTotalAmount() {
        return totalAmount;
    }

    void displayBill() {
        cout << "Bill ID: " << billId << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Doctor Name: " << doctorName << endl;
        cout << "Consultation Fee: " << consultationFee << endl;
        cout << "Medicine Charge: " << medicineCharge << endl;
        cout << "Room Charge: " << roomCharge << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }
};

class Billing {
private:
    vector<Bill> bills;

public:
    void generateBill(int id, string pname, string dname, double fee, double med, double room) {
        Bill bill(id, pname, dname, fee, med, room);
        bills.push_back(bill);
    }

    void displayBills() {
        cout << "Bills:" << endl;
        for (Bill b : bills) {
            b.displayBill();
            cout << endl;
        }
    }

    void searchBill(int id) {
        for (Bill b : bills) {
            if (b.getBillId() == id) {
                b.displayBill();
                return;
            }
        }
        cout << "Bill not found!" << endl;
    }
};

enum BloodType { A_POS, A_NEG, B_POS, B_NEG, AB_POS, AB_NEG, O_POS, O_NEG };
enum BloodComponent { WHOLE_BLOOD, RED_BLOOD_CELLS, PLATELETS, PLASMA };

class BloodUnit {
private:
    int id;
    BloodType type;
    BloodComponent component;
    string donorName;
    string donationDate;

public:
    BloodUnit(int id, BloodType type, BloodComponent component, string donorName, string donationDate)
        : id(id), type(type), component(component), donorName(donorName), donationDate(donationDate) {}

    int getId() { return id; }
    BloodType getType() { return type; }
    BloodComponent getComponent() { return component; }
    string getDonorName() { return donorName; }
    string getDonationDate() { return donationDate; }
};

class BloodBank {
private:
    vector<BloodUnit*> inventory;

public:
    void addBloodUnit(BloodUnit* unit) {
        inventory.push_back(unit);
    }

    void removeBloodUnit(int id) {
        for (auto it = inventory.begin(); it != inventory.end(); ++it) {
            if ((*it)->getId() == id) {
                inventory.erase(it);
                break;
            }
        }
    }

    BloodUnit* searchBloodUnit(BloodType type, BloodComponent component) {
        for (auto unit : inventory) {
            if (unit->getType() == type && unit->getComponent() == component) {
                return unit;
            }
        }
        return nullptr;
    }

    void displayInventory() {
        for (auto unit : inventory) {
            cout << "ID: " << unit->getId() << ", Type: " << unit->getType() << ", Component: " << unit->getComponent()
                 << ", Donor: " << unit->getDonorName() << ", Date: " << unit->getDonationDate() << endl;
        }
    }
};

void billingSection() {
    Billing billing;
    int choice, id;
    string pname, dname;
    double fee, med, room;

    do {
        cout << "Billing Section" << endl;
        cout << "----------------" << endl;
        cout << "1. Generate Bill" << endl;
        cout << "2. Display Bills" << endl;
        cout << "3. Back" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Bill ID: ";
                cin >> id;
                cout << "Enter Patient Name: ";
                cin >> pname;
                cout << "Enter Doctor Name: ";
                cin >> dname;
                cout << "Enter Consultation Fee: ";
                cin >> fee;
                cout << "Enter Medicine Charge: ";
                cin >> med;
                cout << "Enter Room Charge: ";
                cin >> room;
                billing.generateBill(id, pname, dname, fee, med, room);
                break;
            case 2:
                billing.displayBills();
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);
}

void bloodBankSection() {
    BloodBank bloodBank;
    int choice, id;
    int type, component;
    string donorName, donationDate;

    do {
        cout << "Blood Bank Section" << endl;
        cout << "----------------" << endl;
        cout << "1. Add Blood Unit" << endl;
        cout << "2. Remove Blood Unit" << endl;
        cout << "3. Search Blood Unit" << endl;
        cout << "4. Display Inventory" << endl;
        cout << "5. Back" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Blood Unit ID: ";
                cin >> id;
                cout << "Enter Blood Type (0: A_POS, 1: A_NEG, 2: B_POS, 3: B_NEG, 4: AB_POS, 5: AB_NEG, 6: O_POS, 7: O_NEG): ";
                cin >> type;
                cout << "Enter Blood Component (0: WHOLE_BLOOD, 1: RED_BLOOD_CELLS, 2: PLATELETS, 3: PLASMA): ";
                cin >> component;
                cout << "Enter Donor Name: ";
                cin >> donorName;
                cout << "Enter Donation Date: ";
                cin >> donationDate;
                bloodBank.addBloodUnit(new BloodUnit(id, static_cast<BloodType>(type), static_cast<BloodComponent>(component), donorName, donationDate));
                break;
            case 2:
                cout << "Enter Blood Unit ID to remove: ";
                cin >> id;
                bloodBank.removeBloodUnit(id);
                break;
            case 3:
                cout << "Enter Blood Type to search (0: A_POS, 1: A_NEG, 2: B_POS, 3: B_NEG, 4: AB_POS, 5: AB_NEG, 6: O_POS, 7: O_NEG): ";
                cin >> type;
                cout << "Enter Blood Component to search (0: WHOLE_BLOOD, 1: RED_BLOOD_CELLS, 2: PLATELETS, 3: PLASMA): ";
                cin >> component;
                {
                    BloodUnit* unit = bloodBank.searchBloodUnit(static_cast<BloodType>(type), static_cast<BloodComponent>(component));
                    if (unit) {
                        cout << "Blood Unit found!" << endl;
                        cout << "ID: " << unit->getId() << ", Type: " << unit->getType() << ", Component: " << unit->getComponent()
                             << ", Donor: " << unit->getDonorName() << ", Date: " << unit->getDonationDate() << endl;
                    } else {
                        cout << "Blood Unit not found!" << endl;
                    }
                }
                break;
            case 4:
                bloodBank.displayInventory();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                doctorSection();
                int docChoice;
                cin >> docChoice;
                switch (docChoice) {
                    case 1:
                        doctorsSection();
                        int doctorChoice;
                        cin >> doctorChoice;
                        switch (doctorChoice) {
                            case 1:
                                addDoctorSection();
                                break;
                            case 2:
                                viewdoctorSection();
                                int viewdoctorChoice;
                                cin >> viewdoctorChoice;
                                switch (viewdoctorChoice) {
                                    case 1:
                                        cout << "Doctor's Name: Dr. Lakshya Joshi" << endl;
                                        cout << "Doctor's Field: Neurologist" << endl;
                                        cout << "Doctor's Age: 50 years" << endl;
                                        cout << "Doctors's Experience: 10 years" << endl;
                                        break;
                                    case 2:
                                        cout << "Doctor's Name: Dr. Venkatesh Iyer" << endl;
                                        cout << "Doctor's Field: Surgen" << endl;
                                        cout << "Doctor's Age: 60 years" << endl;
                                        cout << "Doctors's Experience: 12 years" << endl;
                                        break;
                                    case 3:
                                        cout << "Doctor's Name: Dr. Mukesh Banerjee" << endl;
                                        cout << "Doctor's Field: Cardiologist" << endl;
                                        cout << "Doctor's Age: 55 years" << endl;
                                        cout << "Doctors's Experience: 11 years" << endl;
                                        break;
                                    case 4:
                                        cout << "Doctor's Name: Dr. Manas Gulati" << endl;
                                        cout << "Doctor's Field: Phychiatrist" << endl;
                                        cout << "Doctor's Age: 40 years" << endl;
                                        cout << "Doctors's Experience: 8 years" << endl;
                                        break;
                                    case 5:
                                        doctorsSection();
                                        break;
                                }
                                break;
                            case 3:
                                cout << "Search functionality not implemented yet." << endl;
                                break;
                            case 4:
                                doctorsSection();
                                break;
                            case 5:
                                break;
                            default:
                                cout << "Invalid choice! Please try again." << endl;
                        }
                        break;
                    case 2:
                        nursesSection();
                        int nurseChoice;
                        cin >> nurseChoice;
                        switch (nurseChoice) {
                            case 1:
                                addNurseSection();
                                break;
                            case 2:
                                viewnurseSection();
                                break;
                            case 3:
                                cout << "Search functionality not implemented yet." << endl;
                                break;
                            case 4:
                                doctorSection();
                                break;
                            case 5:
                                break;
                            default:
                                cout << "Invalid choice! Please try again." << endl;
                        }
                        break;
                    case 3:
                        break;
                    default:
                        cout << "Invalid choice! Please try again." << endl;
                }
                break;
            case 2:
                patientsSection();
                int patientChoice;
                cin >> patientChoice;
                switch (patientChoice) {
                    case 1:
                        addPatientSection();
                        break;
                    case 2:
                        viewpatientSection();
                        int viewpatientchoice;
                        cin >> viewpatientchoice;
                        switch (viewpatientchoice){
                            case 1:
                                cout << "Patient's Name: Mr. Arpit Sharma" << endl;
                                cout << "Patient's Blood Group: O-" << endl;
                                cout << "Patient's Disease/Injury: Tubercloisis" << endl;
                                cout << "Patient's Age: 52 years" << endl;
                                cout << "Patient's Phone number:9645266845 " << endl;
                                break;
                            case 2:
                                cout << "Patient's Name: Ms. Lovely" << endl;
                                cout << "Patient's Blood Group: AB+" << endl;
                                cout << "Patient's Disease/Injury: Chest Pain" << endl;
                                cout << "Patient's Age: 36 years" << endl;
                                cout << "Patient's Phone number: 9656587425" << endl;
                                break;
                            case 3:
                                cout << "Patient's Name: Mr. Dharamchand Pal" << endl;
                                cout << "Patient's Blood Group: B+" << endl;
                                cout << "Patient's Disease/Injury: Leg Fracture" << endl;
                                cout << "Patient's Age: 28 years" << endl;
                                cout << "Patient's Phone number: 7654657646" << endl;
                                break;
                            case 4:
                                cout << "Patient's Name: Mr. Prem Chopra" << endl;
                                cout << "Patient's Blood Group: A-" << endl;
                                cout << "Patient's Disease/Injury: Memory Loss" << endl;
                                cout << "Patient's Age: 69 years" << endl;
                                cout << "Patient's Phone number: 7646879442" << endl;
                                break;
                            case 5:
                                patientsSection();
                                break;
                            case 6:
                                break;
                        }
                        break;
                    case 3:
                        cout << "Search functionality not implemented yet." << endl;
                        break;
                    case 4:
                        displayMenu();
                        break;
                    case 5:
                        break;
                    default:
                        cout << "Invalid choice! Please try again." << endl;
                }
                break;
            case 3:
                machineSection();
                break;
            case 4:
                wardSection();
                break;
            case 5:
                billingSection();
                break;
            case 6:
                bloodBankSection();
                break;
            case 7:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } 
    while (choice != 7);
    return 0;
}