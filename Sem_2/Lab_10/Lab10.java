package Sem_2.Lab_10;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class Lab10 extends Application {
    public static void main (String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage stage) throws Exception {
        FXMLLoader fxmlLoader = new FXMLLoader(getClass().getResource("/Sem_2/Lab_10/Lab10.fxml"));
        Parent root = fxmlLoader.load();
        stage.setTitle("Lab_10 var_08");
        stage.setScene(new Scene(root, 600, 400));
        stage.show();
    }
}
