import java.util.Random;
import java.util.Scanner;

public class  Random_Pass_Gen{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int len, i;
        String characters, pass;
        characters= "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&";  //charaters used in generating random password
        
        System.out.println("What length of password would you like to generate? ");
        len=sc.nextInt();  //storing the length of the password

        char[] password = new char[len];
        Random r = new Random();

        for(i=0;i<len;i++){    //generating random password
            password[i]=characters.charAt(r.nextInt(characters.length()));
        }
        
        pass = new String(password);  //converting  password[] into string
        System.out.println("Here is your unique and strong password: "+pass);

    }
}