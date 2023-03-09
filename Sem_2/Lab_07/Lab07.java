package Sem_2.Lab_07;

import javafx.application.Application;
import javafx.geometry.Orientation;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

import javax.swing.*;

public class Lab07 extends Application {
    public static void main(String[] args) {
        launch(args);
    }
    @Override
    public void start(Stage stage) {
        stage.setTitle("Lab_07 var_8");
        stage.setWidth(600);
        stage.setHeight(600);
        stage.setX(70);
        stage.setY(70);

        Label next = new Label();
        Label next00 = new Label();
        next00.setMinWidth(10);
        Label nextButton = new Label();
        nextButton.setMinWidth(10);
        Label next01 = new Label();
        next01.setMinHeight(2);
        Label next02 = new Label();
        next02.setMinHeight(18);

        Label name = new Label("Ім'я співробітника:");

        Button button = new Button("Запустити");

        Label instruction = new Label("Заробітна плата за...");

        Label[] month = { new Label("січень:"), new Label("лютий:"),
                new Label("березень:"), new Label("квітень:"),
                new Label("травень:"), new Label("червень:"),
                new Label("липень:"), new Label("серпень:"),
                new Label("вересень:"), new Label("жовтень:"),
                new Label("листопад:"), new Label("грудень:")};

        TextField[] textField = {new TextField(), new TextField(),
                new TextField(), new TextField(), new TextField(),
                new TextField(), new TextField(), new TextField(),
                new TextField(), new TextField(), new TextField(),
                new TextField(), new TextField()};
        next.setMinHeight(25);
        next.setMinHeight(25);
        next.setMinWidth(10);
        next.setMaxWidth(10);

        FlowPane fromNameTOMonth = new FlowPane(Orientation.VERTICAL,10,
                18, next01, name, instruction, month[0], month[1], month[2], month[3],
                month[4], month[5], month[6], month[7], month[8], month[9],
                month[10], month[11]);
        fromNameTOMonth.setMaxHeight(600);
        fromNameTOMonth.setMinHeight(600);
        fromNameTOMonth.setMaxWidth(150);
        fromNameTOMonth.setMinWidth(150);

        FlowPane fpTextField = new FlowPane (Orientation.VERTICAL,10, 10, next02,
                textField[0], next, textField[1], textField[2], textField[3],
                textField[4], textField[5], textField[6], textField[7],
                textField[8], textField[9], textField[10], textField[11], textField[12]);
        fpTextField.setMaxHeight(600);
        fpTextField.setMinHeight(600);
        fpTextField.setMaxWidth(150);
        fpTextField.setMinWidth(150);

        button.setOnAction(actionEvent -> {
            int[] arr = new int[12];
            int max = 0;
            try {
                for (int i = 0; i < 12; i++) {
                    if (textField[i + 1].getText().isEmpty()) {
                        arr[i] = 0;
                    } else {
                        arr[i] = Integer.parseInt(textField[i + 1].getText());
                    }
                    if (arr[i] < 0) {
                        JOptionPane.showMessageDialog(null, "Введено некоректне значення.");
                    } else if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                Stage stageResult = new Stage();
                stageResult.setTitle("Максимальна з/п співробітника");
                stageResult.setWidth(400);
                stageResult.setHeight(300);
                stageResult.setX(100);
                stageResult.setY(100);
                String Name = textField[0].getText();
                if (textField[0].getText().isEmpty()) {
                    Name = "NoName";
                }
                Label maxMoney = new Label("Максимальна заробітна плата (");
                Label labelName = new Label(Name);
                Label end = new Label("):     ");
                String maxString = Integer.toString(max);
                Label money = new Label(maxString);
                FlowPane MAX = new FlowPane(maxMoney, labelName, end, money);
                Scene sceneResult = new Scene(MAX);
                stageResult.setScene(sceneResult);
                stageResult.show();
            } catch (Exception err) {
                JOptionPane.showMessageDialog(null, "Введено некоректне значення.");
            }
        });

        BorderPane.setAlignment(fromNameTOMonth, Pos.CENTER);
        BorderPane borderPaneFromNameTOMonth = new BorderPane();
        borderPaneFromNameTOMonth.setCenter(fromNameTOMonth);
        BorderPane borderPaneTextField = new BorderPane();
        borderPaneTextField.setCenter(fpTextField);
        BorderPane borderPaneButton = new BorderPane();
        borderPaneButton.setCenter(button);

        FlowPane root = new FlowPane(10, 1, next00, borderPaneFromNameTOMonth, borderPaneTextField, nextButton, borderPaneButton);
        root.setOrientation(Orientation.HORIZONTAL);
        Scene sceneStart = new Scene(root, 600, 600, Color.RED);
        stage.setScene(sceneStart);
        stage.show();
    }
}