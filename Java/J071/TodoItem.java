package J071;

import java.text.SimpleDateFormat;
import java.util.Date;

public class TodoItem {
    private String title;
    private String detail;
    private Date reg_date;

    public TodoItem(String title, String detail) {
        this.title = title;
        this.detail = detail;
        this.reg_date = new Date();
    }

    // Getter 메서드
    public String getTitle() { return title; }
    public String getDetail() { return detail; }

    // Setter 메서드
    public void setTitle(String newTitle) { title = newTitle; }
    public void setDetail(String newDetail) { detail = newDetail; }

    @Override
    public String toString() {
        return "[" + title + "] " + detail + " - " +
               new SimpleDateFormat("yyyy/MM/dd").format(reg_date);
    }
}

