package Sem_2.Lab_10;

import java.io.File;
import java.util.Scanner;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.fxml.FXML;
import javafx.scene.control.Label;

public class OutputController {

    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    private Label line1;

    @FXML
    private Label line2;

    @FXML
    private Label line3;

    @FXML
    private Label line4;

    @FXML
    void initialize() throws Exception {
        String[] arrLines = {"", "", "", ""};
        File fileR = new File("C:\\Users\\user\\IdeaProjects\\ABP_Sobko\\Sem_2\\Lab_10\\OUTPUT.txt");
        Scanner scanner = new Scanner(fileR);
        int counterLine = 0;
        while (scanner.hasNextLine()){
            arrLines[counterLine] = scanner.nextLine();
            counterLine++;
        }

        line1.setText(arrLines[0]);
        line2.setText(arrLines[1]);
        line3.setText(arrLines[2]);
        line4.setText(arrLines[3]);
    }

}
