@.str = constant [3 x i8] c"%d\00"
define dso_local void @E(i8* %0, i8* %1) {
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
  %17 = xor i1 %16, true
  %18 = xor i1 %17, true
  br i1 %18, label %19, label %74
19:
  store i32 1, i32* %7
  br label %21
21:
  %22 = load i8*, i8** %3
  %23 = load i32, i32* %5
  %24 = load i32, i32* %7
  %25 = add nsw i32 %23, %24
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %22, i64 %26
  %28 = load i8, i8* %27
  %29 = icmp ne i8 %28, 0
  br i1 %29, label %30, label %46
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
  %45 = icmp eq i32 %38, %44
  br label %46
46:
  %47 = phi i1 [ false, %21 ], [ %45, %30 ]
  br i1 %47, label %48, label %51
48:
  %49 = load i32, i32* %7
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %7
  br label %21
51:
  %52 = load i8*, i8** %3
  %53 = load i32, i32* %5
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %52, i64 %54
  %56 = load i8, i8* %55
  %57 = load i8*, i8** %4
  %58 = load i32, i32* %6
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %6
  %60 = sext i32 %58 to i64
  %61 = getelementptr inbounds i8, i8* %57, i64 %60
  store i8 %56, i8* %61
  %62 = load i8*, i8** %4
  %63 = load i32, i32* %6
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  %66 = load i32, i32* %7
  %67 = call i32 (i8*, i8*, ...) @sprintf(i8* %65, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %66)
  %68 = load i32, i32* %6
  %69 = add nsw i32 %68, %67
  store i32 %69, i32* %6
  %70 = load i32, i32* %7
  %71 = load i32, i32* %5
  %72 = add nsw i32 %71, %70
  store i32 %72, i32* %5
  br label %10
74:
  ret void
}
declare i32 @sprintf(i8*, i8*, ...)
