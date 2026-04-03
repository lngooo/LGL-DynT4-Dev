@.str = constant [3 x i8] c"%d\00"
define dso_local void @RLEEncode(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %7 = load i8*, i8** %3
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %11, label %10
10:
  br label %54
11:
  store i32 0, i32* %5
  br label %13
13:
  %14 = load i8*, i8** %3
  %15 = load i32, i32* %5
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = load i8*, i8** %3
  %21 = getelementptr inbounds i8, i8* %20, i64 0
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = icmp eq i32 %19, %23
  br i1 %24, label %25, label %28
25:
  %26 = load i32, i32* %5
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %5
  br label %13
28:
  %30 = load i8*, i8** %4
  %31 = call i64 @strlen(i8* %30)
  %32 = trunc i64 %31 to i32
  store i32 %32, i32* %6
  %33 = load i8*, i8** %3
  %34 = getelementptr inbounds i8, i8* %33, i64 0
  %35 = load i8, i8* %34
  %36 = load i8*, i8** %4
  %37 = load i32, i32* %6
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  store i8 %35, i8* %39
  %40 = load i8*, i8** %4
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = getelementptr inbounds i8, i8* %43, i64 1
  %45 = load i32, i32* %5
  %46 = call i32 (i8*, i8*, ...) @sprintf(i8* %44, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %45)
  %47 = load i8*, i8** %3
  %48 = load i32, i32* %5
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %47, i64 %49
  %51 = load i8*, i8** %4
  call void @RLEEncode(i8* %50, i8* %51)
  br label %54
54:
  ret void
}
declare i64 @strlen(i8*)
declare i32 @sprintf(i8*, i8*, ...)
