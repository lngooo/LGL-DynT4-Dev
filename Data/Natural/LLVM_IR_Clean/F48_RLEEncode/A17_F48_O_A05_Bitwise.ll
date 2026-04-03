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
  %16 = sext i8 %15 to i32
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %76
18:
  store i32 1, i32* %7
  br label %20
20:
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %5
  %23 = load i32, i32* %7
  %24 = add nsw i32 %22, %23
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %21, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp ne i32 %28, 0
  br i1 %29, label %30, label %48
30:
  %31 = load i8*, i8** %3
  %32 = load i32, i32* %5
  %33 = load i32, i32* %7
  %34 = add nsw i32 %32, %33
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %31, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = load i8*, i8** %3
  %40 = load i32, i32* %5
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = xor i32 %38, %44
  %46 = icmp ne i32 %45, 0
  %47 = xor i1 %46, true
  br label %48
48:
  %49 = phi i1 [ false, %20 ], [ %47, %30 ]
  br i1 %49, label %50, label %53
50:
  %51 = load i32, i32* %7
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %7
  br label %20
53:
  %54 = load i8*, i8** %3
  %55 = load i32, i32* %5
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  %58 = load i8, i8* %57
  %59 = load i8*, i8** %4
  %60 = load i32, i32* %6
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %6
  %62 = sext i32 %60 to i64
  %63 = getelementptr inbounds i8, i8* %59, i64 %62
  store i8 %58, i8* %63
  %64 = load i8*, i8** %4
  %65 = load i32, i32* %6
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i8, i8* %64, i64 %66
  %68 = load i32, i32* %7
  %69 = call i32 (i8*, i8*, ...) @sprintf(i8* %67, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %68)
  %70 = load i32, i32* %6
  %71 = add nsw i32 %70, %69
  store i32 %71, i32* %6
  %72 = load i32, i32* %7
  %73 = load i32, i32* %5
  %74 = add nsw i32 %73, %72
  store i32 %74, i32* %5
  br label %10
76:
  ret void
}
declare i32 @sprintf(i8*, i8*, ...)
