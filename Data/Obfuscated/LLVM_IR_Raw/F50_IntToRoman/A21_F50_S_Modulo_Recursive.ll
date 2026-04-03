@.str = constant [2 x i8] c"M\00"
@.str.1 = constant [2 x i8] c"C\00"
@.str.2 = constant [2 x i8] c"D\00"
@.str.3 = constant [2 x i8] c"X\00"
@.str.4 = constant [2 x i8] c"L\00"
@.str.5 = constant [2 x i8] c"I\00"
@.str.6 = constant [2 x i8] c"V\00"
@.str.7 = constant [4 x i8] c"%s\0A\00"
define dso_local void @MGEV(i32 %0, i32 %1, i8* %2, i8* %3, i8* %4, i8* %5) {
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i8*
  %10 = alloca i8*
  %11 = alloca i8*
  %12 = alloca i8*
  %13 = alloca i32
  %14 = alloca i32
  %15 = alloca i32
  store i32 %0, i32* %7
  store i32 %1, i32* %8
  store i8* %2, i8** %9
  store i8* %3, i8** %10
  store i8* %4, i8** %11
  store i8* %5, i8** %12
  %17 = load i32, i32* %7
  %18 = load i32, i32* %8
  %19 = sdiv i32 %17, %18
  %20 = srem i32 %19, 10
  store i32 %20, i32* %13
  %21 = load i32, i32* %13
  %22 = icmp eq i32 %21, 9
  br i1 %22, label %23, label %30
23:
  %24 = load i8*, i8** %12
  %25 = load i8*, i8** %9
  %26 = call i8* @strcat(i8* %24, i8* %25)
  %27 = load i8*, i8** %12
  %28 = load i8*, i8** %11
  %29 = call i8* @strcat(i8* %27, i8* %28)
  br label %81
30:
  %31 = load i32, i32* %13
  %32 = icmp sge i32 %31, 5
  br i1 %32, label %33, label %53
33:
  %34 = load i8*, i8** %12
  %35 = load i8*, i8** %10
  %36 = call i8* @strcat(i8* %34, i8* %35)
  store i32 0, i32* %14
  br label %38
38:
  %39 = load i32, i32* %14
  %40 = load i32, i32* %13
  %41 = sub nsw i32 %40, 5
  %42 = icmp slt i32 %39, %41
  br i1 %42, label %45, label %43
43:
  br label %52
45:
  %46 = load i8*, i8** %12
  %47 = load i8*, i8** %9
  %48 = call i8* @strcat(i8* %46, i8* %47)
  br label %49
49:
  %50 = load i32, i32* %14
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %14
  br label %38
52:
  br label %80
53:
  %54 = load i32, i32* %13
  %55 = icmp eq i32 %54, 4
  br i1 %55, label %56, label %63
56:
  %57 = load i8*, i8** %12
  %58 = load i8*, i8** %9
  %59 = call i8* @strcat(i8* %57, i8* %58)
  %60 = load i8*, i8** %12
  %61 = load i8*, i8** %10
  %62 = call i8* @strcat(i8* %60, i8* %61)
  br label %79
63:
  store i32 0, i32* %15
  br label %65
65:
  %66 = load i32, i32* %15
  %67 = load i32, i32* %13
  %68 = icmp slt i32 %66, %67
  br i1 %68, label %71, label %69
69:
  br label %78
71:
  %72 = load i8*, i8** %12
  %73 = load i8*, i8** %9
  %74 = call i8* @strcat(i8* %72, i8* %73)
  br label %75
75:
  %76 = load i32, i32* %15
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %15
  br label %65
78:
  br label %79
79:
  br label %80
80:
  br label %81
81:
  ret void
}
declare i8* @strcat(i8*, i8*)
define dso_local void @ZoAY(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i32
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %6 = load i8*, i8** %4
  %7 = getelementptr inbounds i8, i8* %6, i64 0
  store i8 0, i8* %7
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = load i32, i32* %3
  %12 = sdiv i32 %11, 1000
  %13 = icmp slt i32 %10, %12
  br i1 %13, label %16, label %14
14:
  br label %22
16:
  %17 = load i8*, i8** %4
  %18 = call i8* @strcat(i8* %17, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %19
19:
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %5
  br label %9
22:
  %23 = load i32, i32* %3
  %24 = load i8*, i8** %4
  call void @MGEV(i32 %23, i32 100, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0), i8* %24)
  %25 = load i32, i32* %3
  %26 = load i8*, i8** %4
  call void @MGEV(i32 %25, i32 10, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.4, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0), i8* %26)
  %27 = load i32, i32* %3
  %28 = load i8*, i8** %4
  call void @MGEV(i32 %27, i32 1, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.5, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0), i8* %28)
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
  call void @ZoAY(i32 %15, i8* %16)
  %17 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.7, i64 0, i64 0), i8* %17)
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
