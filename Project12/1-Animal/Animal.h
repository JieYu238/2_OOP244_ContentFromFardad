#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds {
    class Animal {
        char m_name[41]{};
    protected:  //public to the decendency. Chidren can modify but outside can not
        void name(const char* value);
    public:
        Animal();
        Animal(const char* name);
        const char* name()const;

        void act();
        void move();
        void sound();
        ~Animal();
    };
}
#endif