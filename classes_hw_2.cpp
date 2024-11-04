#include <iostream>
using namespace std;

class Hair_Dryer {
    string brand;
    int price = 1000;
    string color;
    string model;
    int power_in_w = 220;
    string attachment1;
    string attachment2;
    double weight = 2.5;
    string current_attachment;

public:
    void set_brand(const string& brand) {
        this->brand = brand;
    }

    string get_brand() const {
        return brand;
    }

    void set_price(int price) {
        this->price = price;
    }

    int get_price() const {
        return price;
    }

    void set_color(const string& color) {
        this->color = color;
    }

    string get_color() const {
        return color;
    }

    void set_model(const string& model) {
        this->model = model;
    }

    string get_model() const {
        return model;
    }

    void set_power(int power_in_w) {
        this->power_in_w = power_in_w;
    }

    int get_power() const {
        return power_in_w;
    }

    void set_attachment1(const string& attachment1) {
        if (attachment1 == "Concentrator" || attachment1 == "concentrator")
            this->attachment1 = attachment1;
        else
            throw "Invalid value for attachment 1!";
    }

    string get_attachment1() const {
        return attachment1;
    }

    void set_attachment2(const string& attachment2) {
        if (attachment2 == "Diffuser" || attachment2 == "diffuser")
            this->attachment2 = attachment2;
        else
            throw "Invalid value for attachment 2!";
    }

    string get_attachment2() const {
        return attachment2;
    }

    void set_weight(double weight) {
        this->weight = weight;
    }

    double get_weight() const {
        return weight;
    }

    void turn_on_dryer() {
        cout << "The hair dryer is on!\n";
    }

    void choose_attachment(const string& attachment) {
        if (attachment == attachment1 || attachment == attachment2) {
            cout << "You chose the attachment: " << attachment << "!\n";
            current_attachment = attachment;
        }
        else {
            throw "Invalid value!";
        }
    }

    void turn_on_ionization() {
        cout << "Ionization mode is on!\n";
    }

    void start_drying() {
        cout << "Drying your hair with: " << current_attachment << "!\n";
    }

    void dry_clothes() {
        cout << "Drying your clothes!\n";
    }

    void turn_off_ionization() {
        cout << "Ionization mode is off!\n";
    }

    void turn_off_dryer() {
        cout << "The hair dryer is off!\n\n";
    }
};

class Dog {
    string name;
    double age = 1.0;
    string sex;
    string breed;
    string fur_color;
    string owner;
    int paws = 4;
    bool is_alive = true;
    string fav_food;
    string activity;
    int energy = 100;

public:
    void set_name(const string& name) {
        this->name = name;
    }

    string get_name() const {
        return name;
    }

    void set_age(double age) {
        if (age > 0 && age <= 30.0)
            this->age = age;
        else
            throw "Invalid value for age!";
    }

    double get_age() const {
        return age;
    }

    void set_sex(const string& sex) {
        if (sex == "male" || sex == "Male" || sex == "female" || sex == "Female")
            this->sex = sex;
        else
            throw "Invalid value for sex!";
    }

    string get_sex() const {
        return sex;
    }

    void set_breed(const string& breed) {
        this->breed = breed;
    }

    string get_breed() const {
        return breed;
    }

    void set_fur_color(const string& fur_color) {
        this->fur_color = fur_color;
    }

    string get_fur_color() const {
        return fur_color;
    }

    void set_owner(const string& owner) {
        this->owner = owner;
    }

    string get_owner() const {
        return owner;
    }

    void set_paws(int paws) {
        if (paws > 0 && paws <= 4)
            this->paws = paws;
        else
            throw "Invalid value for paws!";
    }

    int get_paws() const {
        return paws;
    }

    void set_is_alive(bool is_alive) {
        this->is_alive = is_alive;
    }

    bool get_is_alive() const {
        return is_alive;
    }

    void set_fav_food(const string& fav_food) {
        this->fav_food = fav_food;
    }

    string get_fav_food() const {
        return fav_food;
    }

    void set_activity(const string& activity) {
        this->activity = activity;
    }

    string get_activity() const {
        return activity;
    }

    void set_energy(int energy) {
        if (energy >= 0 && energy <= 100)
            this->energy = energy;
        else
            throw "Invalid value for energy!";
    }

    int get_energy() const {
        return energy;
    }

    void show_owner() {
        cout << "The owner(-s) of this dog: " << owner << "\n";
    }

    void show_name() {
        cout << "Name of this dog: " << name << "\n";
    }

    void show_fav_food() {
        cout << "Favourite food of this dog: " << fav_food << "\n";
    }

    void make_sound() {
        cout << "WOOF WOOF WOOF!\n";
    }

    void sleep() {
        if (energy <= 30) {
            cout << "Dog is sleeping right now, he/she is tired and needs some rest!\n";
        }
        else {
            cout << "Dog is full of energy and doesn't want to sleep now. He/She wants to play with you!\n";
        }
    }

    void do_activity() {
        cout << "What this dog is doing right now: " << activity << "\n";
    }

    void eat(const string& meal) {
        cout << "Dog is eating " << meal << " right now!\n\n";
    }
};

class Phone {
    string brand;
    string model;
    string color;
    int storage_in_gb = 128;
    double screen_diagonal = 5.7;
    string operating_system;
    int cameras_number = 3;
    int weight_grams = 45;
    double width_in_mm = 2.5;
    double height_in_mm = 8.0;
    string screen_material;
    string corpus_material;
    double battery_capacity_mah = 5.0;
    int charge = 100;
    int apps_number = 20;
    int photos_number = 0;
    string current_app;

public:
    void set_brand(const string& brand) {
        this->brand = brand;
    }

    string get_brand() const {
        return brand;
    }

    void set_model(const string& model) {
        this->model = model;
    }

    string get_model() const {
        return model;
    }

    void set_color(const string& color) {
        this->color = color;
    }

    string get_color() const {
        return color;
    }

    void set_storage(int storage_in_gb) {
        if (storage_in_gb > 0)
            this->storage_in_gb = storage_in_gb;
        else
            throw "Invalid value for storage of the phone!";
    }

    int get_storage() const {
        return storage_in_gb;
    }

    void set_screen_diagonal(double screen_diagonal) {
        if (screen_diagonal > 0)
            this->screen_diagonal = screen_diagonal;
        else
            throw "Invalid value for screen diagonal!";
    }

    double get_screen_diagonal() const {
        return screen_diagonal;
    }

    void set_operating_system(const string& operating_system) {
        this->operating_system = operating_system;
    }

    string get_operating_system() const {
        return operating_system;
    }

    void set_cameras_number(int cameras_number) {
        if (cameras_number > 0)
            this->cameras_number = cameras_number;
        else
            throw "Invalid value for number of cameras!";
    }

    int get_cameras_number() const {
        return cameras_number;
    }

    void set_weight_grams(int weight_grams) {
        if (weight_grams > 0)
            this->weight_grams = weight_grams;
        else
            throw "Invalid value for weight of the phone!";
    }

    int get_weight_grams() const {
        return weight_grams;
    }

    void set_width(double width_in_mm) {
        if (width_in_mm > 0)
            this->width_in_mm = width_in_mm;
        else
            throw "Invalid value for width of the phone!";
    }

    double get_width() const {
        return width_in_mm;
    }

    void set_height(double height_in_mm) {
        if (height_in_mm > 0)
            this->height_in_mm = height_in_mm;
        else
            throw "Invalid value for height of the phone!";
    }

    double get_height() const {
        return height_in_mm;
    }

    void set_screen_material(const string& screen_material) {
        this->screen_material = screen_material;
    }

    string get_screen_material() const {
        return screen_material;
    }

    void set_corpus_material(const string& corpus_material) {
        this->corpus_material = corpus_material;
    }

    string get_corpus_material() const {
        return corpus_material;
    }

    void set_battery_capacity(double battery_capacity_mah) {
        if (battery_capacity_mah > 0)
            this->battery_capacity_mah = battery_capacity_mah;
        else
            throw "Invalid value for battery capacity of the phone!";
    }

    double get_battery_capacity() const {
        return battery_capacity_mah;
    }

    void set_charge(int charge) {
        if (charge >= 0)
            this->charge = charge;
        else
            throw "Invalid value for charge of the phone!";
    }

    int get_charge() const {
        return charge;
    }

    void set_apps_number(int apps_number) {
        if (apps_number > 0)
            this->apps_number = apps_number;
        else
            throw "Invalid value for number of applications of the phone!";
    }

    int get_apps_number() const {
        return apps_number;
    }

    void set_photos_number(int photos_number) {
        if (photos_number >= 0)
            this->photos_number = photos_number;
        else
            throw "Invalid value for number of photos of the phone!";
    }

    int get_photos_number() const {
        return photos_number;
    }

    void set_current_app(const string& current_app) {
        this->current_app = current_app;
    }

    string get_current_app() const {
        return current_app;
    }

    void turn_on_phone() {
        cout << "You turned on the phone! You can use it now!\n";
    }

    void charge_phone() {
        if (charge < 100)
            cout << "The phone is charging now!\n";
        else
            cout << "The phone is already charged!\n";
    }

    void show_apps_number() {
        cout << "Number of the installed applications: " << apps_number << "\n";
    }

    void install_new_app() {
        if (apps_number < 500) {
            apps_number += 1;
            cout << "You have installed new application successfully! Number of the apps on your phone right now: " << apps_number << "\n";
        }
        else {
            cout << "You have installed the maximum number of applications! Your phone is out of free memory. To install a new application, you must clear the memory on your phone!\n";
        }
    }

    void delete_app(int delete_number) {
        if (delete_number <= 0)
            throw "You entered invalid value! Number must be positive!\n";
        else {
            apps_number -= delete_number;
            cout << "You have deleted the chosen applications successfully! Updated number of apps on your phone: " << apps_number << "\n";
        }
    }

    void turn_on_app() {
        cout << "Currently running application: " << current_app << "\n";
    }

    void make_photo(int photos_num) {
        if ((current_app == "camera" || current_app == "Camera") && photos_num > 0) {
            cout << "You have made " << photos_num << " photos successfully!\n";
        }
        else {
            cout << "You need to turn on the phone's camera to make a photo! / Number of photos you want to make must be positive!\n";
        }
    }

    void delete_photo(int delete_num) {
        if (delete_num <= 0) {
            throw "Invalid value! Number of photos you want to delete can't be negative or zero. Number must be positive!\n";
        }
        else if (photos_number == 0) {
            cout << "You don't have photos to delete!\n";
        }
        else {
            photos_number -= delete_num;
            cout << "You have deleted the chosen number of photos successfully! Updated number of photos: " << photos_number << "\n";
        }
    }

    void make_screenshot() {
        photos_number += 1;
        cout << "You have taken a screenshot! Total photos: " << photos_number << "\n";
    }

    void turn_on_music(string song_name) {
        cout << "Currently playing song: " << song_name << "\n";
    }
    void turn_off_music() {
        cout << "The music is turned off successfully!\n";
    }
    void turn_off_phone() {
        cout << "The phone is turned off successfully!\n\n";
    }
};


class Full_Name {
private:
    string name;
    string surname;
    string patronymic;

public:
    void set_name(const string& name) {
        this->name = name;
    }

    string get_name() const {
        return name;
    }

    void set_surname(const string& surname) {
        this->surname = surname;
    }

    string get_surname() const {
        return surname;
    }

    void set_patronymic(const string& patronymic) {
        this->patronymic = patronymic;
    }

    string get_patronymic() const {
        return patronymic;
    }
};

class Birthday_Date {
private:
    int day = 1;
    int month = 1;
    int year = 2000;

public:
    void set_day(int day) {
        if (day > 0 && day <= 31)
            this->day = day;
        else
            throw "Invalid value for day! Acceptable range is from 1 to 31 inclusive.";
    }

    int get_day() const {
        return day;
    }

    void set_month(int month) {
        if (month > 0 && month <= 12)
            this->month = month;
        else
            throw "Invalid value for month! Acceptable range is from 1 to 12 inclusive.";
    }

    int get_month() const {
        return month;
    }

    void set_year(int year) {
        if (year >= 1930 && year <= 2006)
            this->year = year;
        else
            throw "Invalid value for year!";
    }

    int get_year() const {
        return year;
    }
};

class Student {
private:
    Full_Name full_name;
    Birthday_Date birthday;
    int* grades = nullptr;
    int age = 24;
    string email;
    string phone_number;
    int attendance = 0;
    bool late = false;

public:
    void set_full_name(const string& name, const string& surname, const string& patronymic) {
        full_name.set_name(name);
        full_name.set_surname(surname);
        full_name.set_patronymic(patronymic);
    }

    void print_full_name() const {
        cout << "Name: " << full_name.get_name() << "\n";
        cout << "Surname: " << full_name.get_surname() << "\n";
        cout << "Patronymic: " << full_name.get_patronymic() << "\n";
    }

    void set_birthday(int day, int month, int year) {
        birthday.set_day(day);
        birthday.set_month(month);
        birthday.set_year(year);
    }

    void print_birthday_date() const {
        cout << "Date of Birth: " << birthday.get_day() << "." << birthday.get_month() << "." << birthday.get_year() << "\n";
    }

    void set_age(int age) {
        if (age >= 18 && age <= 95)
            this->age = age;
        else
            throw "Invalid value for age!";
    }

    int get_age() const {
        return age;
    }

    void set_email(const string& email) {
        this->email = email;
    }

    string get_email() const {
        return email;
    }

    void set_phone_number(const string& phone_number) {
        this->phone_number = phone_number;
    }

    string get_phone_number() const {
        return phone_number;
    }

    void set_attendance(int attendance) {
        if (attendance >= 0 && attendance <= 100)
            this->attendance = attendance;
        else
            throw "Invalid value for attendance!";
    }

    int get_attendance() const {
        return attendance;
    }

    void set_late(bool late) {
        this->late = late;
    }

    bool get_late() const {
        return late;
    }

    void visit_class() {
        if (attendance <= 95)
            attendance += 5;
        else
            attendance = 100;
        cout << "The student is currently in class.\n";
    }

    void is_late() const {
        if (late)
            cout << "The student came late today!\n";
        else
            cout << "The student came on time today!\n";
    }

    void skip_class() {
        attendance -= 5;
        cout << "The student decided to skip the class!\n";
    }

    void show_attendance() const {
        if (attendance == 0)
            cout << "Your attendance is at 0%. This is unacceptable.\n";
        else
            cout << "You don't have problems with attendance: " << attendance << "%.\n";
    }

    void fill_grades(int number) {
        grades = new int[number];
        cout << "Please enter " << number << " grades\n";
        for (int i = 0; i < number; ++i) {
            cout << "Grade " << (i + 1) << ": ";
            int grade;
            cin >> grade;
            if (grade > 0 && grade <= 12)
                grades[i] = grade;
            else
                throw "Invalid grade! Acceptable range is from 1 to 12.";
        }
    }

    void print_grades(int number) const {
        for (int i = 0; i < number; ++i) {
            cout << "Grade " << (i + 1) << ": " << grades[i] << "\n";
        }
    }

    void free_memory() {
        delete[] grades;
        grades = nullptr;
    }
};

int main() {
    Hair_Dryer dryer;
    dryer.set_brand("Philips");
    dryer.set_price(2299);
    dryer.set_color("black");
    dryer.set_model("BHD274/00");
    dryer.set_power(2200);
    dryer.set_attachment1("Concentrator");
    dryer.set_attachment2("Diffuser");
    dryer.set_weight(0.85);
    dryer.turn_on_dryer();
    dryer.choose_attachment("Diffuser");
    dryer.turn_on_ionization();
    dryer.start_drying();
    dryer.dry_clothes();
    dryer.turn_off_ionization();
    dryer.turn_off_dryer();

    Dog dog;

    dog.set_name("Booba");
    dog.set_age(3.5);
    dog.set_sex("Male");
    dog.set_breed("Pug"); // мопсик
    dog.set_fur_color("Black");
    dog.set_owner("Bob");
    dog.set_paws(4);
    dog.set_is_alive(true);
    dog.set_fav_food("Meat-flavored dog food");
    dog.set_activity("Lying on the sofa :)");
    dog.set_energy(65);
    dog.show_owner();
    dog.show_name();
    dog.show_fav_food();
    dog.make_sound();
    dog.sleep();
    dog.do_activity();
    dog.eat("sausage");

    Phone phone;

    phone.set_brand("iPhone");
    phone.set_model("15 Pro Max");
    phone.set_color("titanium blue");
    phone.set_storage(256);
    phone.set_screen_diagonal(6.7);
    phone.set_operating_system("IOS");
    phone.set_cameras_number(3);
    phone.set_weight_grams(221);
    phone.set_width(76.7);
    phone.set_height(159.9);
    phone.set_screen_material("Ceramic Shield");
    phone.set_corpus_material("aluminum and titanium");
    phone.set_battery_capacity(4.422);
    phone.set_charge(54);
    phone.set_apps_number(100);
    phone.set_photos_number(2000);
    phone.set_current_app("Camera");
    phone.turn_on_phone();
    phone.charge_phone();
    phone.show_apps_number();
    phone.install_new_app();
    phone.delete_app(7);
    phone.turn_on_app();
    phone.make_photo(100);
    phone.delete_photo(99);
    phone.make_screenshot();
    phone.turn_on_music("Never let me down again");
    phone.turn_off_music();
    phone.turn_off_phone();

    Student student;

    student.set_full_name("Daryna", "Onopko", "Serhiivna");
    student.set_birthday(29, 11, 1998);
    student.set_age(25);
    student.set_email("darynaonopko98@gmail.com");
    student.set_phone_number("+380967092691");
    student.set_attendance(90);
    student.set_late(false);
    student.visit_class();
    student.is_late();
    student.skip_class();
    student.show_attendance();
    student.print_full_name();
    student.print_birthday_date();
    student.fill_grades(10);
    student.print_grades(10);
    student.free_memory();
}
