@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @ZEM(i8 signext %0) {
  %2 = alloca i8
  store i8 %0, i8* %2
  %3 = load i8, i8* %2
  %4 = sext i8 %3 to i32
  %5 = icmp eq i32 %4, 97
  br i1 %5, label %42, label %6
6:
  %7 = load i8, i8* %2
  %8 = sext i8 %7 to i32
  %9 = icmp eq i32 %8, 101
  br i1 %9, label %42, label %10
10:
  %11 = load i8, i8* %2
  %12 = sext i8 %11 to i32
  %13 = icmp eq i32 %12, 105
  br i1 %13, label %42, label %14
14:
  %15 = load i8, i8* %2
  %16 = sext i8 %15 to i32
  %17 = icmp eq i32 %16, 111
  br i1 %17, label %42, label %18
18:
  %19 = load i8, i8* %2
  %20 = sext i8 %19 to i32
  %21 = icmp eq i32 %20, 117
  br i1 %21, label %42, label %22
22:
  %23 = load i8, i8* %2
  %24 = sext i8 %23 to i32
  %25 = icmp eq i32 %24, 65
  br i1 %25, label %42, label %26
26:
  %27 = load i8, i8* %2
  %28 = sext i8 %27 to i32
  %29 = icmp eq i32 %28, 69
  br i1 %29, label %42, label %30
30:
  %31 = load i8, i8* %2
  %32 = sext i8 %31 to i32
  %33 = icmp eq i32 %32, 73
  br i1 %33, label %42, label %34
34:
  %35 = load i8, i8* %2
  %36 = sext i8 %35 to i32
  %37 = icmp eq i32 %36, 79
  br i1 %37, label %42, label %38
38:
  %39 = load i8, i8* %2
  %40 = sext i8 %39 to i32
  %41 = icmp eq i32 %40, 85
  br label %42
42:
  %43 = phi i1 [ true, %34 ], [ true, %30 ], [ true, %26 ], [ true, %22 ], [ true, %18 ], [ true, %14 ], [ true, %10 ], [ true, %6 ], [ true, %1 ], [ %41, %38 ]
  %44 = zext i1 %43 to i32
  ret i32 %44
}
define dso_local i32 @oGs(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  store i8* %0, i8** %3
  %4 = load i8*, i8** %3
  %5 = load i8, i8* %4
  %6 = sext i8 %5 to i32
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %17
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = call i32 @ZEM(i8 signext %11)
  %13 = load i8*, i8** %3
  %14 = getelementptr inbounds i8, i8* %13, i64 1
  %15 = call i32 @oGs(i8* %14)
  %16 = add nsw i32 %12, %15
  store i32 %16, i32* %2
  br label %17
17:
  %18 = load i32, i32* %2
  ret i32 %18
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @oGs(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
