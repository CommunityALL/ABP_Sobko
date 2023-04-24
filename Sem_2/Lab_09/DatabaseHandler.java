package Sem_2.Lab_09;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class DatabaseHandler extends Configs{
    public Connection getDbConnection()
            throws ClassNotFoundException, SQLException {
        String connectionString = "jdbc:ucanaccess:/" + dbAddress + "/" + dbName;
        Class.forName("net.ucanaccess.jdbc.UcanaccessDriver");
        return DriverManager.getConnection(connectionString);
    }

    public void addHuman(String firstName, String lastName, String gender, String jobTitle) throws SQLException, ClassNotFoundException {
        Connection connection = getDbConnection();
        Statement statement = connection.createStatement();
        String insert = "INSERT INTO `" + Const.HUMANS_TABLE + "` (`" + Const.HUMANS_FIRST_NAME
                + "`, `" + Const.HUMANS_LAST_NAME + "`, `" + Const.HUMANS_LEVEL + "`, `"
                + Const.HUMANS_JOB_TITLE + "`) " + "VALUES('" + firstName + "', '" + lastName
                + "', '" + gender + "', '" + jobTitle + "');";
        statement.executeUpdate(insert);
        connection.close();
    }
}
