package Sem_2.Lab_09;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class Main extends Application{
    public static void main(String[] args){
        launch(args);
    }

    @Override
    public void start(Stage stage) throws Exception {
        FXMLLoader fxmlLoader = new FXMLLoader(getClass().getResource("/Sem_2/Lab_09/Main.fxml"));
        Parent root = fxmlLoader.load();
        stage.setTitle("Lab_09 var_08 (Відділ кадрів)");
        stage.setMaxHeight(440);
        stage.setMaxWidth(620);
        stage.setScene(new Scene(root, 600, 400));
        stage.show();
    }
}
