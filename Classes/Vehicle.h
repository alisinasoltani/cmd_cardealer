#ifndef __VEHICLE__
    #define __VEHICLE__
    class Vehicle {
        protected:
            int max_speed;
            void virtual drive() = 0; 
    };
#endif