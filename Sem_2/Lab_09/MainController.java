package Sem_2.Lab_09;

import java.io.IOException;
import java.net.URL;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ResourceBundle;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;

import javafx.stage.Stage;

public class MainController {

    private final ObservableList<Human> humansData = FXCollections.observableArrayList();

    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    private Button addGuestButton;

    @FXML
    private Button updateButton;

    @FXML
    private TableView<Human> tableGuest;

    @FXML
    private TableColumn<Human, String> firstNameColumn ;

    @FXML
    private TableColumn<Human, String> lastNameColumn;

    @FXML
    private TableColumn<Human, String> levelColumn;

    @FXML
    private TableColumn<Human, String> jobTitleColumn;

    @FXML
    void initialize() throws SQLException, ClassNotFoundException {
        DatabaseHandler databaseHandler = new DatabaseHandler();
        Connection connection = databaseHandler.getDbConnection();
        Statement statement = connection.createStatement();
        ResultSet resultSet = statement.executeQuery("SELECT * FROM `" + Const.HUMANS_TABLE + "`;");

        while (resultSet.next()){
            int id = resultSet.getInt(1);
            String firstName = resultSet.getString(2);
            String lastName = resultSet.getString(3);
            String level = resultSet.getString(4);
            String jobTitle = resultSet.getString(5);
            humansData.add(new Human(id, firstName, lastName, level, jobTitle));
        }
        firstNameColumn.setCellValueFactory(new PropertyValueFactory<>("firstName"));
        lastNameColumn.setCellValueFactory(new PropertyValueFactory<>("lastName"));
        levelColumn.setCellValueFactory(new PropertyValueFactory<>("level"));
        jobTitleColumn.setCellValueFactory(new PropertyValueFactory<>("jobTitle"));
        tableGuest.setItems(humansData);

        addGuestButton.setOnAction(actionEvent -> {
                FXMLLoader fxmlLoader = new FXMLLoader();
                fxmlLoader.setLocation(getClass().getResource("/Sem_2/Lab_09/AddHuman.fxml"));

                try {
                    fxmlLoader.load();
                } catch (IOException e) {
                    e.printStackTrace();
                }

                Parent root = fxmlLoader.getRoot();
                Stage stage = new Stage();
                stage.setTitle("Додати людину");
                stage.setScene(new Scene(root, 600, 400));

                stage.showAndWait();
        });

        updateButton.setOnAction(actionEvent -> {
            double x = updateButton.getScene().getWindow().getX();
            double y = updateButton.getScene().getWindow().getY();

            updateButton.getScene().getWindow().hide();

            FXMLLoader fxmlLoader = new FXMLLoader();
            fxmlLoader.setLocation(getClass().getResource("/Sem_2/Lab_09/Main.fxml"));
            try {
                fxmlLoader.load();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
            Parent root = fxmlLoader.getRoot();
            Stage stage = new Stage();
            stage.setTitle("Lab_09 var_08 (Відділ кадрів)");
            stage.setMaxHeight(440);
            stage.setMaxWidth(620);
            stage.setScene(new Scene(root, 600, 400));
            stage.setX(x);
            stage.setY(y);
            stage.show();
        });
    }
}
