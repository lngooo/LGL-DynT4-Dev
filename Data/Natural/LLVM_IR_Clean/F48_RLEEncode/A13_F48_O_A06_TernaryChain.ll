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
  br i1 %16, label %17, label %76
17:
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
  br i1 %28, label %29, label %46
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
  %45 = zext i1 %44 to i32
  br label %47
46:
  br label %47
47:
  %48 = phi i32 [ %45, %29 ], [ 0, %46 ]
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %50, label %53
50:
  %51 = load i32, i32* %7
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %7
  br label %19
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
