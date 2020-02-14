import com.panamahitek.ArduinoException;
import com.panamahitek.PanamaHitek_Arduino;
import jssc.SerialPortEvent;
import jssc.SerialPortEventListener;
import jssc.SerialPortException;

import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 * Ejemplo sobre recepción de datos desde Java hasta Arduino
 *
 * @author Antony García González
 */
public class JavaTX {

    //Se crea una instancia de la librería PanamaHitek_Arduino
    private static PanamaHitek_Arduino ino = new PanamaHitek_Arduino();

    private static void sendData()
    {
        try {
            Scanner sc = new Scanner(System.in);
            String numero = sc.nextLine();
            ino.sendData(numero);
        } catch (ArduinoException ex) {
            Logger.getLogger(JavaTX.class.getName()).log(Level.SEVERE, null, ex);
        } catch (SerialPortException ex) {
            Logger.getLogger(JavaTX.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    public static void main(String[] args) {
        try {
            ino.arduinoTX("COM7", 9600);
            sendData();
        } catch (ArduinoException ex) {
            Logger.getLogger(JavaTX.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
}