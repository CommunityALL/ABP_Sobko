package Sem_2.Lab_08;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.FlowPane;
import javafx.scene.shape.Polygon;
import javafx.stage.Stage;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.scene.control.ContextMenu;
import javafx.scene.control.MenuItem;
import javafx.scene.paint.Color;
public class Lab08 extends Application {
    public static void main(String[] args) {
        launch(args);
    }
    @Override
    public void start(Stage stage) {
        stage.setTitle("Lab_08 var_8");
        stage.setWidth(600);
        stage.setHeight(500);
        stage.setX(70);
        stage.setY(70);

        FlowPane root = new FlowPane();
        FlowPane polygon = new FlowPane();

        Polygon triangle = new Polygon();
        triangle.getPoints().setAll(250.0, 150.0, 100.0, 400.0, 500.0, 400.0);
        triangle.setFill(Color.WHITE);
        triangle.setStroke(Color.BLACK);
        ContextMenu contextMenu = new ContextMenu();
        MenuItem red = new MenuItem("Red");
        red.setOnAction(actionEvent -> triangle.setFill(Color.RED));
        MenuItem black = new MenuItem("Black");
        black.setOnAction(actionEvent -> triangle.setFill(Color.BLACK));
        MenuItem green = new MenuItem("Green");
        green.setOnAction(actionEvent -> triangle.setFill(Color.GREEN));
        contextMenu.getItems().addAll(red, black, green);
        triangle.setOnContextMenuRequested(contextMenuEvent -> contextMenu.show(triangle, contextMenuEvent.getScreenX(), contextMenuEvent.getScreenY()));
        polygon.setPadding(new Insets(80));
        polygon.getChildren().add(triangle);
        root.getChildren().add(polygon);
        Scene scene = new Scene(root);
        stage.setScene(scene);
        stage.show();
    }
}