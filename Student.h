class Student {
  // private section
  private:
    int studentId;
    char name[20];
  //    int studentId
  //    name <- 20 charcters
  
  // public section
  public:
    void assignDetails(int stuId, const char n[]);
    void display();
  //    assignDetails() method declaration
  //    display() method declaration
};