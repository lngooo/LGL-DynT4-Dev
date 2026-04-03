@.str = constant [2 x i8] c"M\00"
@.str.1 = constant [3 x i8] c"CM\00"
@.str.2 = constant [2 x i8] c"D\00"
@.str.3 = constant [2 x i8] c"C\00"
@.str.4 = constant [3 x i8] c"CD\00"
@.str.5 = constant [3 x i8] c"XC\00"
@.str.6 = constant [2 x i8] c"L\00"
@.str.7 = constant [2 x i8] c"X\00"
@.str.8 = constant [3 x i8] c"XL\00"
@.str.9 = constant [3 x i8] c"IX\00"
@.str.10 = constant [2 x i8] c"V\00"
@.str.11 = constant [2 x i8] c"I\00"
@.str.12 = constant [3 x i8] c"IV\00"
define dso_local void @Ap5(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 0, i32* %7
  br label %9
9:
  %10 = load i32, i32* %7
  %11 = load i32, i32* %5
  %12 = icmp slt i32 %10, %11
  br i1 %12, label %15, label %13
13:
  br label %22
15:
  %16 = load i8*, i8** %4
  %17 = load i8*, i8** %6
  %18 = call i8* @strcat(i8* %16, i8* %17)
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %7
  br label %9
22:
  ret void
}
declare i8* @strcat(i8*, i8*)
define dso_local void @mDMR(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %4
  %6 = getelementptr inbounds i8, i8* %5, i64 0
  store i8 0, i8* %6
  %7 = load i8*, i8** %4
  %8 = load i32, i32* %3
  %9 = sdiv i32 %8, 1000
  call void @Ap5(i8* %7, i32 %9, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  %10 = load i32, i32* %3
  %11 = srem i32 %10, 1000
  store i32 %11, i32* %3
  %12 = load i32, i32* %3
  %13 = icmp sge i32 %12, 900
  br i1 %13, label %14, label %19
14:
  %15 = load i8*, i8** %4
  %16 = call i8* @strcat(i8* %15, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0))
  %17 = load i32, i32* %3
  %18 = sub nsw i32 %17, 900
  store i32 %18, i32* %3
  br label %44
19:
  %20 = load i32, i32* %3
  %21 = icmp sge i32 %20, 500
  br i1 %21, label %22, label %30
22:
  %23 = load i8*, i8** %4
  %24 = call i8* @strcat(i8* %23, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0))
  %25 = load i32, i32* %3
  %26 = sub nsw i32 %25, 500
  store i32 %26, i32* %3
  %27 = load i8*, i8** %4
  %28 = load i32, i32* %3
  %29 = sdiv i32 %28, 100
  call void @Ap5(i8* %27, i32 %29, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  br label %43
30:
  %31 = load i32, i32* %3
  %32 = icmp sge i32 %31, 400
  br i1 %32, label %33, label %38
33:
  %34 = load i8*, i8** %4
  %35 = call i8* @strcat(i8* %34, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.4, i64 0, i64 0))
  %36 = load i32, i32* %3
  %37 = sub nsw i32 %36, 400
  store i32 %37, i32* %3
  br label %42
38:
  %39 = load i8*, i8** %4
  %40 = load i32, i32* %3
  %41 = sdiv i32 %40, 100
  call void @Ap5(i8* %39, i32 %41, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  br label %42
42:
  br label %43
43:
  br label %44
44:
  %45 = load i32, i32* %3
  %46 = srem i32 %45, 100
  store i32 %46, i32* %3
  %47 = load i32, i32* %3
  %48 = icmp sge i32 %47, 90
  br i1 %48, label %49, label %54
49:
  %50 = load i8*, i8** %4
  %51 = call i8* @strcat(i8* %50, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.5, i64 0, i64 0))
  %52 = load i32, i32* %3
  %53 = sub nsw i32 %52, 90
  store i32 %53, i32* %3
  br label %79
54:
  %55 = load i32, i32* %3
  %56 = icmp sge i32 %55, 50
  br i1 %56, label %57, label %65
57:
  %58 = load i8*, i8** %4
  %59 = call i8* @strcat(i8* %58, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i64 0, i64 0))
  %60 = load i32, i32* %3
  %61 = sub nsw i32 %60, 50
  store i32 %61, i32* %3
  %62 = load i8*, i8** %4
  %63 = load i32, i32* %3
  %64 = sdiv i32 %63, 10
  call void @Ap5(i8* %62, i32 %64, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.7, i64 0, i64 0))
  br label %78
65:
  %66 = load i32, i32* %3
  %67 = icmp sge i32 %66, 40
  br i1 %67, label %68, label %73
68:
  %69 = load i8*, i8** %4
  %70 = call i8* @strcat(i8* %69, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.8, i64 0, i64 0))
  %71 = load i32, i32* %3
  %72 = sub nsw i32 %71, 40
  store i32 %72, i32* %3
  br label %77
73:
  %74 = load i8*, i8** %4
  %75 = load i32, i32* %3
  %76 = sdiv i32 %75, 10
  call void @Ap5(i8* %74, i32 %76, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.7, i64 0, i64 0))
  br label %77
77:
  br label %78
78:
  br label %79
79:
  %80 = load i32, i32* %3
  %81 = srem i32 %80, 10
  store i32 %81, i32* %3
  %82 = load i32, i32* %3
  %83 = icmp sge i32 %82, 9
  br i1 %83, label %84, label %87
84:
  %85 = load i8*, i8** %4
  %86 = call i8* @strcat(i8* %85, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.9, i64 0, i64 0))
  br label %107
87:
  %88 = load i32, i32* %3
  %89 = icmp sge i32 %88, 5
  br i1 %89, label %90, label %96
90:
  %91 = load i8*, i8** %4
  %92 = call i8* @strcat(i8* %91, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.10, i64 0, i64 0))
  %93 = load i8*, i8** %4
  %94 = load i32, i32* %3
  %95 = sub nsw i32 %94, 5
  call void @Ap5(i8* %93, i32 %95, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.11, i64 0, i64 0))
  br label %106
96:
  %97 = load i32, i32* %3
  %98 = icmp eq i32 %97, 4
  br i1 %98, label %99, label %102
99:
  %100 = load i8*, i8** %4
  %101 = call i8* @strcat(i8* %100, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.12, i64 0, i64 0))
  br label %105
102:
  %103 = load i8*, i8** %4
  %104 = load i32, i32* %3
  call void @Ap5(i8* %103, i32 %104, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.11, i64 0, i64 0))
  br label %105
105:
  br label %106
106:
  br label %107
107:
  ret void
}
