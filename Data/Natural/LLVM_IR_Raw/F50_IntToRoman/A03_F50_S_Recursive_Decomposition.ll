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
@.str.13 = constant [4 x i8] c"%s\0A\00"
define dso_local void @helper(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %5 = load i32, i32* %3
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %8
7:
  br label %133
8:
  %9 = load i32, i32* %3
  %10 = icmp sge i32 %9, 1000
  br i1 %10, label %11, label %17
11:
  %12 = load i8*, i8** %4
  %13 = call i8* @strcat(i8* %12, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  %14 = load i32, i32* %3
  %15 = sub nsw i32 %14, 1000
  %16 = load i8*, i8** %4
  call void @helper(i32 %15, i8* %16)
  br label %133
17:
  %18 = load i32, i32* %3
  %19 = icmp sge i32 %18, 900
  br i1 %19, label %20, label %26
20:
  %21 = load i8*, i8** %4
  %22 = call i8* @strcat(i8* %21, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0))
  %23 = load i32, i32* %3
  %24 = sub nsw i32 %23, 900
  %25 = load i8*, i8** %4
  call void @helper(i32 %24, i8* %25)
  br label %132
26:
  %27 = load i32, i32* %3
  %28 = icmp sge i32 %27, 500
  br i1 %28, label %29, label %35
29:
  %30 = load i8*, i8** %4
  %31 = call i8* @strcat(i8* %30, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0))
  %32 = load i32, i32* %3
  %33 = sub nsw i32 %32, 500
  %34 = load i8*, i8** %4
  call void @helper(i32 %33, i8* %34)
  br label %131
35:
  %36 = load i32, i32* %3
  %37 = icmp sge i32 %36, 400
  br i1 %37, label %38, label %44
38:
  %39 = load i8*, i8** %4
  %40 = call i8* @strcat(i8* %39, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.3, i64 0, i64 0))
  %41 = load i32, i32* %3
  %42 = sub nsw i32 %41, 400
  %43 = load i8*, i8** %4
  call void @helper(i32 %42, i8* %43)
  br label %130
44:
  %45 = load i32, i32* %3
  %46 = icmp sge i32 %45, 100
  br i1 %46, label %47, label %53
47:
  %48 = load i8*, i8** %4
  %49 = call i8* @strcat(i8* %48, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.4, i64 0, i64 0))
  %50 = load i32, i32* %3
  %51 = sub nsw i32 %50, 100
  %52 = load i8*, i8** %4
  call void @helper(i32 %51, i8* %52)
  br label %129
53:
  %54 = load i32, i32* %3
  %55 = icmp sge i32 %54, 90
  br i1 %55, label %56, label %62
56:
  %57 = load i8*, i8** %4
  %58 = call i8* @strcat(i8* %57, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.5, i64 0, i64 0))
  %59 = load i32, i32* %3
  %60 = sub nsw i32 %59, 90
  %61 = load i8*, i8** %4
  call void @helper(i32 %60, i8* %61)
  br label %128
62:
  %63 = load i32, i32* %3
  %64 = icmp sge i32 %63, 50
  br i1 %64, label %65, label %71
65:
  %66 = load i8*, i8** %4
  %67 = call i8* @strcat(i8* %66, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i64 0, i64 0))
  %68 = load i32, i32* %3
  %69 = sub nsw i32 %68, 50
  %70 = load i8*, i8** %4
  call void @helper(i32 %69, i8* %70)
  br label %127
71:
  %72 = load i32, i32* %3
  %73 = icmp sge i32 %72, 40
  br i1 %73, label %74, label %80
74:
  %75 = load i8*, i8** %4
  %76 = call i8* @strcat(i8* %75, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.7, i64 0, i64 0))
  %77 = load i32, i32* %3
  %78 = sub nsw i32 %77, 40
  %79 = load i8*, i8** %4
  call void @helper(i32 %78, i8* %79)
  br label %126
80:
  %81 = load i32, i32* %3
  %82 = icmp sge i32 %81, 10
  br i1 %82, label %83, label %89
83:
  %84 = load i8*, i8** %4
  %85 = call i8* @strcat(i8* %84, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8, i64 0, i64 0))
  %86 = load i32, i32* %3
  %87 = sub nsw i32 %86, 10
  %88 = load i8*, i8** %4
  call void @helper(i32 %87, i8* %88)
  br label %125
89:
  %90 = load i32, i32* %3
  %91 = icmp sge i32 %90, 9
  br i1 %91, label %92, label %98
92:
  %93 = load i8*, i8** %4
  %94 = call i8* @strcat(i8* %93, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.9, i64 0, i64 0))
  %95 = load i32, i32* %3
  %96 = sub nsw i32 %95, 9
  %97 = load i8*, i8** %4
  call void @helper(i32 %96, i8* %97)
  br label %124
98:
  %99 = load i32, i32* %3
  %100 = icmp sge i32 %99, 5
  br i1 %100, label %101, label %107
101:
  %102 = load i8*, i8** %4
  %103 = call i8* @strcat(i8* %102, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.10, i64 0, i64 0))
  %104 = load i32, i32* %3
  %105 = sub nsw i32 %104, 5
  %106 = load i8*, i8** %4
  call void @helper(i32 %105, i8* %106)
  br label %123
107:
  %108 = load i32, i32* %3
  %109 = icmp sge i32 %108, 4
  br i1 %109, label %110, label %116
110:
  %111 = load i8*, i8** %4
  %112 = call i8* @strcat(i8* %111, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.11, i64 0, i64 0))
  %113 = load i32, i32* %3
  %114 = sub nsw i32 %113, 4
  %115 = load i8*, i8** %4
  call void @helper(i32 %114, i8* %115)
  br label %122
116:
  %117 = load i8*, i8** %4
  %118 = call i8* @strcat(i8* %117, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.12, i64 0, i64 0))
  %119 = load i32, i32* %3
  %120 = sub nsw i32 %119, 1
  %121 = load i8*, i8** %4
  call void @helper(i32 %120, i8* %121)
  br label %122
122:
  br label %123
123:
  br label %124
124:
  br label %125
125:
  br label %126
126:
  br label %127
127:
  br label %128
128:
  br label %129
129:
  br label %130
130:
  br label %131
131:
  br label %132
132:
  br label %133
133:
  ret void
}
declare i8* @strcat(i8*, i8*)
define dso_local void @IntToRoman(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %4
  %6 = getelementptr inbounds i8, i8* %5, i64 0
  store i8 0, i8* %6
  %7 = load i32, i32* %3
  %8 = load i8*, i8** %4
  call void @helper(i32 %7, i8* %8)
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [100 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %20
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  %16 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  call void @IntToRoman(i32 %15, i8* %16)
  %17 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.13, i64 0, i64 0), i8* %17)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
