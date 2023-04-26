package Sem_2.Lab_10;

import java.io.File;
import java.io.FileWriter;
import java.text.DecimalFormat;
import java.util.Scanner;
import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.stage.Stage;

public class Lab10Controller {

    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    private Label gpa1;

    @FXML
    private Label gpa10;

    @FXML
    private Label gpa11;

    @FXML
    private Label gpa12;

    @FXML
    private Label gpa13;

    @FXML
    private Label gpa2;

    @FXML
    private Label gpa3;

    @FXML
    private Label gpa4;

    @FXML
    private Label gpa5;

    @FXML
    private Label gpa6;

    @FXML
    private Label gpa7;

    @FXML
    private Label gpa8;

    @FXML
    private Label gpa9;

    @FXML
    private Label name1;

    @FXML
    private Label name10;

    @FXML
    private Label name11;

    @FXML
    private Label name12;

    @FXML
    private Label name13;

    @FXML
    private Label name2;

    @FXML
    private Label name3;

    @FXML
    private Label name4;

    @FXML
    private Label name5;

    @FXML
    private Label name6;

    @FXML
    private Label name7;

    @FXML
    private Label name8;

    @FXML
    private Label name9;

    @FXML
    private Button staptButton;

    @FXML
    void initialize() throws Exception {
        String[] arrNames = {"", "", "", "", "", "", "", "", "", "", "", "", ""};
        double[] arrGPA = {1.0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        File fileR = new File("C:\\Users\\user\\IdeaProjects\\ABP_Sobko\\Sem_2\\Lab_10\\INPUT.txt");
        Scanner scanner = new Scanner(fileR);

        double maxGPA = 0;
        String maxGPAString = "";
        double gpa = 0;
        int counterName = 0;
        int counterGPA = 0;
        int counter = 0;
        while (scanner.hasNextLine()) {
            if (counter % 2 == 0){
                counter++;
                arrNames[counterName] = scanner.nextLine();
                counterName++;
            }
            else {
                counter--;
                arrGPA[counterGPA] = Double.parseDouble(scanner.nextLine());
                if(arrGPA[counterGPA] > maxGPA) {
                    maxGPA = arrGPA[counterGPA];
                    maxGPAString = arrNames[counterGPA];
                }
                counterGPA++;
            }
        }
        double finalMaxGPA = maxGPA;
        String finalMaxGPAString = maxGPAString;
        for (double v : arrGPA) {
            gpa += v;
        }
        gpa /= arrGPA.length;
        double finalGpa = gpa;

        name1.setText(arrNames[0]);
        name2.setText(arrNames[1]);
        name3.setText(arrNames[2]);
        name4.setText(arrNames[3]);
        name5.setText(arrNames[4]);
        name6.setText(arrNames[5]);
        name7.setText(arrNames[6]);
        name8.setText(arrNames[7]);
        name9.setText(arrNames[8]);
        name10.setText(arrNames[9]);
        name11.setText(arrNames[10]);
        name12.setText(arrNames[11]);
        name13.setText(arrNames[12]);

        gpa1.setText(Double.toString(arrGPA[0]));
        gpa2.setText(Double.toString(arrGPA[1]));
        gpa3.setText(Double.toString(arrGPA[2]));
        gpa4.setText(Double.toString(arrGPA[3]));
        gpa5.setText(Double.toString(arrGPA[4]));
        gpa6.setText(Double.toString(arrGPA[5]));
        gpa7.setText(Double.toString(arrGPA[6]));
        gpa8.setText(Double.toString(arrGPA[7]));
        gpa9.setText(Double.toString(arrGPA[8]));
        gpa10.setText(Double.toString(arrGPA[9]));
        gpa11.setText(Double.toString(arrGPA[10]));
        gpa12.setText(Double.toString(arrGPA[11]));
        gpa13.setText(Double.toString(arrGPA[12]));

        staptButton.setOnAction(actionEvent -> {
            File fileW = new File("C:\\Users\\user\\IdeaProjects\\ABP_Sobko\\Sem_2\\Lab_10\\OUTPUT.txt");
            try (FileWriter fileWriter =  new FileWriter(fileW, false);){
                fileWriter.write("Найуспішніший студент:\n");
                fileWriter.write(finalMaxGPAString);
                fileWriter.write(" (");
                fileWriter.write(String.valueOf(finalMaxGPA));
                fileWriter.write(")\n");
                fileWriter.write("Середній бал по групі:\n");
                DecimalFormat decimalFormat = new DecimalFormat( "#.##" );
                String result = decimalFormat.format(finalGpa);
                fileWriter.write(result);
            } catch (IOException e) {
                throw new RuntimeException(e);
            }

            FXMLLoader fxmlLoader = new FXMLLoader();
            fxmlLoader.setLocation(getClass().getResource("/Sem_2/Lab_10/Output.fxml"));

            try {
                fxmlLoader.load();
            } catch (IOException e) {
                e.printStackTrace();
            }

            Parent root = fxmlLoader.getRoot();
            Stage stage = new Stage();
            stage.setTitle("Output");
            stage.setScene(new Scene(root, 450, 200));

            stage.showAndWait();
        });
    }
}
