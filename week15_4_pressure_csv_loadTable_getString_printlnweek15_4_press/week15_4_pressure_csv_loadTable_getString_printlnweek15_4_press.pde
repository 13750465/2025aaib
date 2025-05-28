// week15-4_pressure_csv_loadTable_getString_println
Table table = loadTable("pressure.csv","header");

for(TableRow row : table.rows()){
  String t = row.getString("測量日期");
  println("測量日期: " + t);
  int up = int(row.getString("收縮壓(mmHg)") );
  int down = int(row.getString("舒張壓(mmHg)") );
  println("測量日期: " + t + "收縮壓: " + up + "舒張壓: " +down);
}
