package Sem_2.Lab_09;

import java.net.URL;
import java.sql.SQLException;
import java.util.ResourceBundle;

import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.RadioButton;
import javafx.scene.control.TextField;
import javafx.scene.control.ToggleGroup;

public class AddHumanController {
    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    private Button addHumanButton;

    @FXML
    private RadioButton seniorButton;

    @FXML
    private RadioButton middleButton;

    @FXML
    private TextField firstNameField;

    @FXML
    private RadioButton juniorButton;

    @FXML
    private TextField lastNameField;

    @FXML
    private ToggleGroup levelGroup;

    @FXML
    private ComboBox<String> jobTitleComboBox;

    @FXML
    void initialize() {
        jobTitleComboBox.getItems().addAll("Посада", "Web-програміст", "Android-розробник", "Розробник ігор (GameDev)");
        final String[] jobTitleComboBoxSetOn = new String[1];
        jobTitleComboBox.setValue("Посада");
        jobTitleComboBox.setOnAction(actionEvent -> {
            jobTitleComboBoxSetOn[0] = jobTitleComboBox.getValue();
        });
        addHumanButton.setOnAction(actionEvent -> {
            String firstName;
            String lastName;
            String level;
            String jobTitle;
            firstName = firstNameField.getText().trim();
            lastName = lastNameField.getText().trim();
            if (juniorButton.isSelected()) level = "junior";
            else if (middleButton.isSelected()) level = "middle";
            else level = "senior";
            jobTitle = jobTitleComboBoxSetOn[0];

            DatabaseHandler databaseHandler = new DatabaseHandler();
            try {
                databaseHandler.addHuman(firstName, lastName, level, jobTitle);
            } catch (ClassNotFoundException | SQLException e) {
                throw new RuntimeException(e);
            }
            addHumanButton.getScene().getWindow().hide();

        });
    }

}