@.str = constant [3 x i8] c"%d\00"
define dso_local void @RLEEncode(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca [256 x i8]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i8
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %11 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %12 = load i8*, i8** %3
  %13 = call i8* @strcpy(i8* %11, i8* %12)
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %16
16:
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 %18
  %20 = load i8, i8* %19
  %21 = icmp ne i8 %20, 0
  br i1 %21, label %22, label %61
22:
  store i32 1, i32* %8
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 %25
  %27 = load i8, i8* %26
  store i8 %27, i8* %9
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = load i32, i32* %8
  %31 = add nsw i32 %29, %30
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 %32
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = load i8, i8* %9
  %37 = sext i8 %36 to i32
  %38 = icmp eq i32 %35, %37
  br i1 %38, label %39, label %42
39:
  %40 = load i32, i32* %8
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %8
  br label %28
42:
  %43 = load i8, i8* %9
  %44 = load i8*, i8** %4
  %45 = load i32, i32* %7
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %7
  %47 = sext i32 %45 to i64
  %48 = getelementptr inbounds i8, i8* %44, i64 %47
  store i8 %43, i8* %48
  %49 = load i8*, i8** %4
  %50 = load i32, i32* %7
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i32, i32* %8
  %54 = call i32 (i8*, i8*, ...) @sprintf(i8* %52, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %53)
  %55 = load i32, i32* %7
  %56 = add nsw i32 %55, %54
  store i32 %56, i32* %7
  %57 = load i32, i32* %8
  %58 = load i32, i32* %6
  %59 = add nsw i32 %58, %57
  store i32 %59, i32* %6
  br label %16
61:
  %62 = load i8*, i8** %4
  %63 = load i32, i32* %7
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  store i8 0, i8* %65
  ret void
}
declare i8* @strcpy(i8*, i8*)
declare i32 @sprintf(i8*, i8*, ...)
