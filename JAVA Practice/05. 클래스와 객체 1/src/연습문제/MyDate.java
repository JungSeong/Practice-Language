package 연습문제;

public class MyDate {
    private int day;
    private int month;
    private int year;

    public int getday(){
        return day;
    }

    public int getmonth(){
        return month;
    }

    public int getyear(){
        return year;
    }

    public void setday(int day){
        this.day = day;
    }

    public void setmonth(int month){
        this.month = month;
    }

    public void setyear(int year){
        this. year = year;
    }

    public MyDate(int pday, int pmonth, int pyear){
        day = pday;
        month = pmonth;
        year = pyear;
    }

     public boolean isValid(){
        if (day < 1 && day > 31){
            System.out.println("유효하지 않은 날짜입니다.");
            return false;
        }
        
        if (month % 2 == 1 || month == 8){
            if (day >= 1 && day <=31){
                System.out.println("유효한 날짜입니다.");
                return true;
            }
            else{
                System.out.println("유효하지 않은 날짜입니다.");
                return false;
            }
        }
        else if (month == 2){
            if (day >= 1 && day <=28){
                System.out.println("유효한 날짜입니다.");
                return true;
            }
            else{
                System.out.println("유효하지 않은 날짜입니다.");
                return false;
            }
        }
        else{
            if (day >= 1 && day <30){
                System.out.println("유효한 날짜입니다.");
                return true;
            }
            else{
                System.out.println("유효하지 않은 날짜입니다.");
                return false;
            }
        }
    }
}
