@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @ThtF(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  %4 = load i8*, i8** %2
  %5 = icmp ne i8* %4, null
  br i1 %5, label %6, label %10
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %11, label %10
10:
  br label %50
11:
  store i32 1, i32* %3
  br label %13
13:
  %14 = load i8*, i8** %2
  %15 = load i32, i32* %3
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp ne i32 %19, 0
  br i1 %20, label %21, label %33
21:
  %22 = load i8*, i8** %2
  %23 = load i32, i32* %3
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = load i8*, i8** %2
  %29 = getelementptr inbounds i8, i8* %28, i64 0
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = icmp eq i32 %27, %31
  br label %33
33:
  %34 = phi i1 [ false, %13 ], [ %32, %21 ]
  br i1 %34, label %35, label %38
35:
  %36 = load i32, i32* %3
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %3
  br label %13
38:
  %39 = load i8*, i8** %2
  %40 = getelementptr inbounds i8, i8* %39, i64 0
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = load i32, i32* %3
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %42, i32 %43)
  %45 = load i8*, i8** %2
  %46 = load i32, i32* %3
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  call void @ThtF(i8* %48)
  br label %50
50:
  ret void
}
declare i32 @printf(i8*, ...)
define dso_local void @NDL(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  call void @ThtF(i8* %3)
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  ret void
}
