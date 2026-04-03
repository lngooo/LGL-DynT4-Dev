@.str = constant [2 x i8] c"M\00"
@.str.1 = constant [3 x i8] c"CM\00"
@.str.2 = constant [2 x i8] c"D\00"
@.str.3 = constant [3 x i8] c"CD\00"
@.str.4 = constant [2 x i8] c"C\00"
@.str.5 = constant [3 x i8] c"XC\00"
@.str.6 = constant [2 x i8] c"L\00"
@.str.7 = constant [3 x i8] c"XL\00"
@.str.8 = constant [2 x i8] c"X\00"
@.str.9 = constant [3 x i8] c"IX\00"
@.str.10 = constant [2 x i8] c"V\00"
@.str.11 = constant [3 x i8] c"IV\00"
@.str.12 = constant [2 x i8] c"I\00"
define dso_local void @gZA(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %4
  %6 = getelementptr inbounds i8, i8* %5, i64 0
  store i8 0, i8* %6
  br label %7
7:
  %8 = load i32, i32* %3
  %9 = icmp slt i32 %8, 1000
  br i1 %9, label %10, label %11
10:
  br label %16
11:
  %12 = load i8*, i8** %4
  %13 = call i8* @strcat(i8* %12, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  %14 = load i32, i32* %3
  %15 = sub nsw i32 %14, 1000
  store i32 %15, i32* %3
  br label %7
16:
  %17 = load i32, i32* %3
  %18 = icmp slt i32 %17, 900
  br i1 %18, label %19, label %20
19:
  br label %25
20:
  %21 = load i8*, i8** %4
  %22 = call i8* @strcat(i8* %21, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0))
  %23 = load i32, i32* %3
  %24 = sub nsw i32 %23, 900
  store i32 %24, i32* %3
  br label %25
25:
  %26 = load i32, i32* %3
  %27 = icmp slt i32 %26, 500
  br i1 %27, label %28, label %29
28:
  br label %34
29:
  %30 = load i8*, i8** %4
  %31 = call i8* @strcat(i8* %30, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0))
  %32 = load i32, i32* %3
  %33 = sub nsw i32 %32, 500
  store i32 %33, i32* %3
  br label %34
34:
  %35 = load i32, i32* %3
  %36 = icmp slt i32 %35, 400
  br i1 %36, label %37, label %38
37:
  br label %43
38:
  %39 = load i8*, i8** %4
  %40 = call i8* @strcat(i8* %39, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.3, i64 0, i64 0))
  %41 = load i32, i32* %3
  %42 = sub nsw i32 %41, 400
  store i32 %42, i32* %3
  br label %43
43:
  %44 = load i32, i32* %3
  %45 = icmp slt i32 %44, 100
  br i1 %45, label %46, label %47
46:
  br label %52
47:
  %48 = load i8*, i8** %4
  %49 = call i8* @strcat(i8* %48, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.4, i64 0, i64 0))
  %50 = load i32, i32* %3
  %51 = sub nsw i32 %50, 100
  store i32 %51, i32* %3
  br label %43
52:
  %53 = load i32, i32* %3
  %54 = icmp slt i32 %53, 90
  br i1 %54, label %55, label %56
55:
  br label %61
56:
  %57 = load i8*, i8** %4
  %58 = call i8* @strcat(i8* %57, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.5, i64 0, i64 0))
  %59 = load i32, i32* %3
  %60 = sub nsw i32 %59, 90
  store i32 %60, i32* %3
  br label %61
61:
  %62 = load i32, i32* %3
  %63 = icmp slt i32 %62, 50
  br i1 %63, label %64, label %65
64:
  br label %70
65:
  %66 = load i8*, i8** %4
  %67 = call i8* @strcat(i8* %66, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i64 0, i64 0))
  %68 = load i32, i32* %3
  %69 = sub nsw i32 %68, 50
  store i32 %69, i32* %3
  br label %70
70:
  %71 = load i32, i32* %3
  %72 = icmp slt i32 %71, 40
  br i1 %72, label %73, label %74
73:
  br label %79
74:
  %75 = load i8*, i8** %4
  %76 = call i8* @strcat(i8* %75, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.7, i64 0, i64 0))
  %77 = load i32, i32* %3
  %78 = sub nsw i32 %77, 40
  store i32 %78, i32* %3
  br label %79
79:
  %80 = load i32, i32* %3
  %81 = icmp slt i32 %80, 10
  br i1 %81, label %82, label %83
82:
  br label %88
83:
  %84 = load i8*, i8** %4
  %85 = call i8* @strcat(i8* %84, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8, i64 0, i64 0))
  %86 = load i32, i32* %3
  %87 = sub nsw i32 %86, 10
  store i32 %87, i32* %3
  br label %79
88:
  %89 = load i32, i32* %3
  %90 = icmp slt i32 %89, 9
  br i1 %90, label %91, label %92
91:
  br label %97
92:
  %93 = load i8*, i8** %4
  %94 = call i8* @strcat(i8* %93, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.9, i64 0, i64 0))
  %95 = load i32, i32* %3
  %96 = sub nsw i32 %95, 9
  store i32 %96, i32* %3
  br label %97
97:
  %98 = load i32, i32* %3
  %99 = icmp slt i32 %98, 5
  br i1 %99, label %100, label %101
100:
  br label %106
101:
  %102 = load i8*, i8** %4
  %103 = call i8* @strcat(i8* %102, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.10, i64 0, i64 0))
  %104 = load i32, i32* %3
  %105 = sub nsw i32 %104, 5
  store i32 %105, i32* %3
  br label %106
106:
  %107 = load i32, i32* %3
  %108 = icmp slt i32 %107, 4
  br i1 %108, label %109, label %110
109:
  br label %115
110:
  %111 = load i8*, i8** %4
  %112 = call i8* @strcat(i8* %111, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.11, i64 0, i64 0))
  %113 = load i32, i32* %3
  %114 = sub nsw i32 %113, 4
  store i32 %114, i32* %3
  br label %115
115:
  %116 = load i32, i32* %3
  %117 = icmp slt i32 %116, 1
  br i1 %117, label %118, label %119
118:
  ret void
119:
  %120 = load i8*, i8** %4
  %121 = call i8* @strcat(i8* %120, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.12, i64 0, i64 0))
  %122 = load i32, i32* %3
  %123 = sub nsw i32 %122, 1
  store i32 %123, i32* %3
  br label %115
}
declare i8* @strcat(i8*, i8*)
