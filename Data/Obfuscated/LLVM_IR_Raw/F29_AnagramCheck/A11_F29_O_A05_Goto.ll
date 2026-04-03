@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @hpQ(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %9 = load i8*, i8** %4
  %10 = call i64 @strlen(i8* %9)
  %11 = load i8*, i8** %5
  %12 = call i64 @strlen(i8* %11)
  %13 = icmp ne i64 %10, %12
  br i1 %13, label %14, label %15
14:
  store i32 0, i32* %3
  br label %74
15:
  store i32 0, i32* %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %19
19:
  %20 = load i8*, i8** %4
  %21 = load i32, i32* %8
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = icmp ne i8 %24, 0
  br i1 %25, label %27, label %26
26:
  br label %62
27:
  %28 = load i8*, i8** %4
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = load i32, i32* %6
  %35 = xor i32 %34, %33
  store i32 %35, i32* %6
  %36 = load i8*, i8** %5
  %37 = load i32, i32* %8
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = load i32, i32* %6
  %43 = xor i32 %42, %41
  store i32 %43, i32* %6
  %44 = load i8*, i8** %4
  %45 = load i32, i32* %8
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = load i32, i32* %7
  %51 = add nsw i32 %50, %49
  store i32 %51, i32* %7
  %52 = load i8*, i8** %5
  %53 = load i32, i32* %8
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %52, i64 %54
  %56 = load i8, i8* %55
  %57 = sext i8 %56 to i32
  %58 = load i32, i32* %7
  %59 = sub nsw i32 %58, %57
  store i32 %59, i32* %7
  %60 = load i32, i32* %8
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %8
  br label %19
62:
  %63 = load i32, i32* %6
  %64 = icmp eq i32 %63, 0
  br i1 %64, label %65, label %68
65:
  %66 = load i32, i32* %7
  %67 = icmp eq i32 %66, 0
  br label %68
68:
  %69 = phi i1 [ false, %62 ], [ %67, %65 ]
  %70 = zext i1 %69 to i32
  store i32 %70, i32* %3
  br label %74
74:
  %75 = load i32, i32* %3
  ret i32 %75
}
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @hpQ(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
