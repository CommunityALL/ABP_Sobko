package Sem_2.Lab_09;

public class Human {

    private int id;
    private String firstName;
    private String lastName;
    private String level;
    private String jobTitle;

    public Human(int id, String firstName, String lastName, String level, String jobTitle) {
        setId(id);
        setFirstName(firstName);
        setLastName(lastName);
        setLevel(level);
        setJobTitle(jobTitle);
    }

    public int getId(){
        return id;
    }
    public void setId(int idValue){
        this.id = idValue;
    }
    public String getFirstName(){
        return firstName;
    }
    public void setFirstName(String firstNameValue){
        this.firstName = firstNameValue;
    }
    public String getLastName(){
        return lastName;
    }
    public void setLastName(String lastNameValue){
        this.lastName = lastNameValue;
    }
    public String getLevel(){
        return level;
    }
    public void setLevel(String levelValue){
        this.level = levelValue;
    }
    public String getJobTitle(){
        return jobTitle;
    }
    public void setJobTitle(String jobTitleValue){
        this.jobTitle = jobTitleValue;
    }
}