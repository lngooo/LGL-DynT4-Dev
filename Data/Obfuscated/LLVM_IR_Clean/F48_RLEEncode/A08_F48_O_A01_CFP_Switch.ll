@.str = constant [3 x i8] c"%d\00"
define dso_local void @wpwj5(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i8
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = icmp ne i32 %14, 3
  br i1 %15, label %16, label %70
16:
  %17 = load i32, i32* %5
  switch i32 %17, label %69 [
    i32 0, label %18
    i32 1, label %28
  ]
18:
  %19 = load i8*, i8** %3
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp eq i32 %24, 0
  %26 = zext i1 %25 to i64
  %27 = select i1 %25, i32 3, i32 1
  store i32 %27, i32* %5
  br label %69
28:
  store i32 0, i32* %8
  %30 = load i8*, i8** %3
  %31 = load i32, i32* %6
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  store i8 %34, i8* %9
  br label %35
35:
  %36 = load i8*, i8** %3
  %37 = load i32, i32* %6
  %38 = load i32, i32* %8
  %39 = add nsw i32 %37, %38
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %36, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = load i8, i8* %9
  %45 = sext i8 %44 to i32
  %46 = icmp eq i32 %43, %45
  br i1 %46, label %47, label %50
47:
  %48 = load i32, i32* %8
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %8
  br label %35
50:
  %51 = load i8, i8* %9
  %52 = load i8*, i8** %4
  %53 = load i32, i32* %7
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %7
  %55 = sext i32 %53 to i64
  %56 = getelementptr inbounds i8, i8* %52, i64 %55
  store i8 %51, i8* %56
  %57 = load i8*, i8** %4
  %58 = load i32, i32* %7
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  %61 = load i32, i32* %8
  %62 = call i32 (i8*, i8*, ...) @sprintf(i8* %60, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %61)
  %63 = load i32, i32* %7
  %64 = add nsw i32 %63, %62
  store i32 %64, i32* %7
  %65 = load i32, i32* %8
  %66 = load i32, i32* %6
  %67 = add nsw i32 %66, %65
  store i32 %67, i32* %6
  store i32 0, i32* %5
  br label %69
69:
  br label %13
70:
  %71 = load i8*, i8** %4
  %72 = load i32, i32* %7
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %71, i64 %73
  store i8 0, i8* %74
  ret void
}
declare i32 @sprintf(i8*, i8*, ...)
