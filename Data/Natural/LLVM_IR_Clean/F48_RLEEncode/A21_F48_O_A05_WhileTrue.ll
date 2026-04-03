@.str = constant [3 x i8] c"%d\00"
define dso_local void @RLEEncode(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i8
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %11
11:
  br label %12
12:
  %13 = load i8*, i8** %3
  %14 = load i32, i32* %5
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %21
20:
  br label %62
21:
  store i32 0, i32* %7
  %23 = load i8*, i8** %3
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  store i8 %27, i8* %8
  br label %28
28:
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %5
  %31 = load i32, i32* %7
  %32 = add nsw i32 %30, %31
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %29, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = load i8, i8* %8
  %38 = sext i8 %37 to i32
  %39 = icmp eq i32 %36, %38
  br i1 %39, label %40, label %43
40:
  %41 = load i32, i32* %7
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %7
  br label %28
43:
  %44 = load i8, i8* %8
  %45 = load i8*, i8** %4
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %6
  %48 = sext i32 %46 to i64
  %49 = getelementptr inbounds i8, i8* %45, i64 %48
  store i8 %44, i8* %49
  %50 = load i8*, i8** %4
  %51 = load i32, i32* %6
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i32, i32* %7
  %55 = call i32 (i8*, i8*, ...) @sprintf(i8* %53, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %54)
  %56 = load i32, i32* %6
  %57 = add nsw i32 %56, %55
  store i32 %57, i32* %6
  %58 = load i32, i32* %7
  %59 = load i32, i32* %5
  %60 = add nsw i32 %59, %58
  store i32 %60, i32* %5
  br label %11
62:
  %63 = load i8*, i8** %4
  %64 = load i32, i32* %6
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %63, i64 %65
  store i8 0, i8* %66
  ret void
}
declare i32 @sprintf(i8*, i8*, ...)
