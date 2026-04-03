@.str = constant [5 x i8] c"%c%d\00"
define dso_local void @Xcvp(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca [16 x i8]
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %7 = load i8*, i8** %3
  %8 = load i8, i8* %7
  %9 = sext i8 %8 to i32
  %10 = icmp eq i32 %9, 0
  br i1 %10, label %11, label %12
11:
  br label %58
12:
  store i32 1, i32* %5
  br label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i32, i32* %5
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %22, label %34
22:
  %23 = load i8*, i8** %3
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = load i8*, i8** %3
  %30 = getelementptr inbounds i8, i8* %29, i64 0
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = icmp eq i32 %28, %32
  br label %34
34:
  %35 = phi i1 [ false, %14 ], [ %33, %22 ]
  br i1 %35, label %36, label %39
36:
  %37 = load i32, i32* %5
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %5
  br label %14
39:
  %41 = getelementptr inbounds [16 x i8], [16 x i8]* %6, i64 0, i64 0
  %42 = load i8*, i8** %3
  %43 = getelementptr inbounds i8, i8* %42, i64 0
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = load i32, i32* %5
  %47 = call i32 (i8*, i8*, ...) @sprintf(i8* %41, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %45, i32 %46)
  %48 = load i8*, i8** %4
  %49 = getelementptr inbounds [16 x i8], [16 x i8]* %6, i64 0, i64 0
  %50 = call i8* @strcat(i8* %48, i8* %49)
  %51 = load i8*, i8** %3
  %52 = load i32, i32* %5
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i8, i8* %51, i64 %53
  %55 = load i8*, i8** %4
  call void @Xcvp(i8* %54, i8* %55)
  br label %58
58:
  ret void
}
declare i32 @sprintf(i8*, i8*, ...)
declare i8* @strcat(i8*, i8*)
