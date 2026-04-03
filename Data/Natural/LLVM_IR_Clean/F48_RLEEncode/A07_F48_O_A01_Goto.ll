@.str = constant [3 x i8] c"%d\00"
define dso_local void @RLEEncode(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %10
10:
  %11 = load i8*, i8** %3
  %12 = load i32, i32* %5
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %18, label %17
17:
  br label %70
18:
  store i32 1, i32* %7
  br label %19
19:
  %20 = load i8*, i8** %3
  %21 = load i32, i32* %5
  %22 = load i32, i32* %7
  %23 = add nsw i32 %21, %22
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %20, i64 %24
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp ne i32 %27, 0
  br i1 %28, label %29, label %48
29:
  %30 = load i8*, i8** %3
  %31 = load i32, i32* %5
  %32 = load i32, i32* %7
  %33 = add nsw i32 %31, %32
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %30, i64 %34
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = load i8*, i8** %3
  %39 = load i32, i32* %5
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp eq i32 %37, %43
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %7
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %7
  br label %19
48:
  %49 = load i8*, i8** %3
  %50 = load i32, i32* %5
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = load i8*, i8** %4
  %55 = load i32, i32* %6
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %6
  %57 = sext i32 %55 to i64
  %58 = getelementptr inbounds i8, i8* %54, i64 %57
  store i8 %53, i8* %58
  %59 = load i8*, i8** %4
  %60 = load i32, i32* %6
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %59, i64 %61
  %63 = load i32, i32* %7
  %64 = call i32 (i8*, i8*, ...) @sprintf(i8* %62, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %63)
  %65 = load i32, i32* %6
  %66 = add nsw i32 %65, %64
  store i32 %66, i32* %6
  %67 = load i32, i32* %7
  %68 = load i32, i32* %5
  %69 = add nsw i32 %68, %67
  store i32 %69, i32* %5
  br label %10
70:
  %71 = load i8*, i8** %4
  %72 = load i32, i32* %6
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %71, i64 %73
  store i8 0, i8* %74
  ret void
}
declare i32 @sprintf(i8*, i8*, ...)
